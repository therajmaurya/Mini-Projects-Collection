package hadoop;
import java.io.IOException;
import java.util.*;
import org.apache.hadoop.fs.Path;

import org.apache.hadoop.conf.*;	

import org.apache.hadoop.io.*;

import org.apache.hadoop.mapreduce.*;

import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;

import org.apache.hadoop.mapreduce.lib.input.TextInputFormat;

import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

import org.apache.hadoop.mapreduce.lib.output.TextOutputFormat;


public class Wordcount 
{
	
		

	public static class Map extends Mapper<LongWritable, Text, Text, IntWritable>

	{

	private final static IntWritable one = new IntWritable(1);
	private Text word = new Text();

	 public void map(LongWritable key, Text value, Context context) throws IOException,InterruptedException

	 {
				       
	String line = value.toString();
		
	StringTokenizer tokenizer = new StringTokenizer(line);
		
	 while (tokenizer.hasMoreTokens())
	 {
		
	word.set(tokenizer.nextToken());
				       
	  context.write(word, one);

				       
	}


	}

	}

	public static class Reduce extends Reducer<Text, IntWritable, Text, IntWritable>

	{
	   public void reduce(Text key, Iterable<IntWritable> values, Context context) throws IOException, InterruptedException
		   
	  {
		      
	 int sum = 0;
		       
	for(IntWritable val: values)
		     
	  {
		    	  
	 sum += val.get();
		    	   
		     
	  }
		    	   
		       
		      
	 context.write(key, new IntWritable(sum));
		   
	  }
		  
	 }


	public static void main(String[] args) throws Exception

	{
	    
	 Configuration  conf = new Configuration ();
	    
	 //conf.set("Mapred.job.tracker", "hdfs://hadoopmaster:54311");
	    
	 //conf.set("fs.default.name", "hdfs://hadoopmaster:54310");
	     
	Job job = new Job(conf,"Wordcount");
	    
	 job.setJarByClass(Wordcount.class);
	     
	job.setOutputKeyClass(Text.class);
	    
	 job.setOutputValueClass(IntWritable.class);
	    
	 job.setMapperClass(Map.class);
// Defining Combiner class here 
	 job.setCombinerClass(Reduce.class);
	 	     
	job.setReducerClass(Reduce.class);
	     
	job.setInputFormatClass(TextInputFormat.class);
		 
	job.setOutputFormatClass(TextOutputFormat.class);
		
	 FileInputFormat.addInputPath(job, new Path(args[0]));
		 
	FileOutputFormat.setOutputPath(job, new Path(args[1]));
		
	    
	job.waitForCompletion(true);
	    
	     
	 
	  }


	}





