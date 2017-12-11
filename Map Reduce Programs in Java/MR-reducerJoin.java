package hadoop;
import java.io.IOException;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.lib.input.TextInputFormat;
import org.apache.hadoop.mapreduce.lib.input.MultipleInputs;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;

//import org.apache.hadoop.mapreduce.lib.input.MultipleInputs;

public class ReduceJoin 
{
public static class custmapper extends Mapper<LongWritable,Text,Text,Text>
{
	public void map (LongWritable key, Text value,Context context) throws IOException,InterruptedException
	{
		String [] parts  = value.toString().split(",");
		context.write(new Text(parts[0]), new Text("cust\t"+ parts[1]));
		
		
	}
}
public static class transmapper extends Mapper<LongWritable,Text,Text,Text>
{
	public void map (LongWritable key, Text value,Context context) throws IOException,InterruptedException
	
	{
		String [] parts  = value.toString().split(",");
		context.write(new Text(parts[2]), new Text("trans\t"+ parts[3]));
		
		
	}
}

public static class hreducer extends Reducer<Text,Text,Text,Text>
{
	public void reduce (Text key, Iterable<Text> values,Context context) throws IOException,InterruptedException
	{
		String name =" ";
		int total = 0;
		int count =0,partsn;
		for (Text val: values)
		{
			String [] parts  = val.toString().split("\t");
			if (parts[0].equals("trans"))
			{
				count = count + 1;
				partsn = Integer.parseInt(parts[1]);
				
				
				total = total +  partsn ;
				
				
			}
			else if (parts[0].equals("cust"))
				
			{
				name = parts[1];
				
			}
		}
		//String str = String.format("%d\t%d", count,name);
		context.write(new Text(name), new Text("count=" + "\t"+ count + "Total=" + "\t" +total));
		
		
	}
	
}
public static void main (String args[]) throws Exception
{
	Configuration conf = new Configuration ();
	
	Job job = new Job(conf,"reduceJoin");
	
	job.setJarByClass(ReduceJoin.class);
	job.setReducerClass(hreducer.class);
	job.setMapperClass(custmapper.class);
	job.setMapperClass(transmapper.class);
	job.setMapOutputKeyClass(Text.class);
	job.setMapOutputValueClass(Text.class);
	MultipleInputs.addInputPath(job,new Path(args[0]),TextInputFormat.class,custmapper.class);
	MultipleInputs.addInputPath(job, new Path(args[1]), TextInputFormat.class,transmapper.class);
	Path outputPath = new Path (args[2]);
	FileOutputFormat.setOutputPath(job, outputPath);
	outputPath.getFileSystem(conf);
	System.exit(job.waitForCompletion(true)? 0:1);
	
	
}
}