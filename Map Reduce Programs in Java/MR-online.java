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

public class Online {
	
	
	//import org.apache.hadoop.mapreduce.lib.input.MultipleInputs;

	
	public static class quesmapper extends Mapper<LongWritable,Text,Text,Text>
	{
		public void map (LongWritable key, Text value,Context context) throws IOException,InterruptedException
		{
			String [] parts  = value.toString().split(",");
			context.write(new Text(parts[0]), new Text("ques\t"+ parts[1] +parts[3]));
			
			
		}
	}
	public static class ansmapper extends Mapper<LongWritable,Text,Text,Text>
	{
		public void map (LongWritable key, Text value,Context context) throws IOException,InterruptedException
		
		{
			String [] parts  = value.toString().split(",");
			context.write(new Text(parts[1]), new Text("ans\t"  + parts[2]));
			
			
		}
	}

	public static class ansreducer extends Reducer<Text,Text,Text,Text>
	{
		public void reduce (Text key, Iterable<Text> values,Context context) throws IOException,InterruptedException
		{
			String  ques = " ",name= " ";
			//int total = 0;
			int counta =0,countb=0;
			for (Text val: values)
			{
				String [] parts  = val.toString().split("\t");
				if (parts[0].equals("ans"))
					
				{
					//name = parts[1];
					
					
					if (parts[1].equals("A"))
					{
						counta = counta + 1;
						
					}
					
					if (parts[1].equals("B"))
					{
						countb = countb + 1;
						
					}
					
					
									
				}
				else if (parts[0].equals("ques"))
					
				{
					ques= parts[1];
					name = parts[2];
					
				}
			}
			//String str = String.format("%d\t%d", count,name);
			context.write(new Text(ques), new Text("count for A=" + "\t"+ counta +"count for B=" + "\t"+ countb +"\t" + " " +name));
			
			
		}
		
	}
	public static void main (String args[]) throws Exception
	{
		Configuration conf = new Configuration ();
		
		Job job = new Job(conf,"Online");
		
		job.setJarByClass(Online.class);
		job.setReducerClass(ansreducer.class);
		job.setMapperClass(quesmapper.class);
		job.setMapperClass(ansmapper.class);
		job.setMapOutputKeyClass(Text.class);
		job.setMapOutputValueClass(Text.class);
		MultipleInputs.addInputPath(job,new Path(args[0]),TextInputFormat.class,quesmapper.class);
		MultipleInputs.addInputPath(job, new Path(args[1]), TextInputFormat.class,ansmapper.class);
		Path outputPath = new Path (args[2]);
		FileOutputFormat.setOutputPath(job, outputPath);
		outputPath.getFileSystem(conf);
		System.exit(job.waitForCompletion(true)? 0:1);
		
		
	}
	

}
