package hadoop;
import java.io.IOException;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
//import org.apache.hadoop.mapred.jobcontrol.Job;
import org.apache.hadoop.mapreduce.Mapper;
//import org.apache.hadoop.mapreduce.Mapper.Context;
import org.apache.hadoop.mapreduce.Partitioner;
import org.apache.hadoop.mapreduce.Reducer;
//import org.apache.hadoop.mapreduce.Reducer.Context;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.input.TextInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.apache.hadoop.mapreduce.lib.output.TextOutputFormat;



public class Phit {
	
	public static class PMapper extends Mapper<LongWritable, Text, Text, Text> 
	{ 

		
		//@Override
		public void map(LongWritable key, Text value, Context context) throws IOException,
		InterruptedException
		{
		
			
		String[] tokens = value.toString().split("\t");
		
		String gender = tokens[2].toString();
		String nameAgeSalary = tokens[0]+"\t"+tokens[1]+"\t"+tokens[3];
		//the mapper emits key, value pair where the key is the gender and the value is the other information which includes name, age and score
		context.write(new Text(gender), new Text(nameAgeSalary));
		}
		
				
		}
		
	public static class AgePartitioner extends Partitioner<Text, Text>
	
	{
		//@Override
		public int getPartition(Text key, Text value, int numReduceTasks) {
		String [] nameAgeSalary = value.toString().split("\t");
		
		String age = nameAgeSalary[1];
		int ageInt = Integer.parseInt(age);
		//this is done to avoid performing mod with 0
		if(numReduceTasks == 0)
					
			return 0;
		//if the age is <20, assign partition 0
		if(ageInt <=20)
		 {
			return 0;
		 }
		//else if the age is between 20 and 50, assign partition 1
		if(ageInt >20 && ageInt <=50)
		{
		   return 1 ;
		}
		//otherwise assign partition 2
		else
		   return 2 ;
		}
		
		}

	public static class PReducer extends Reducer<Text, Text, Text, Text> 
	{
		//@Override
		public  void reduce(Text key, Iterable<Text> values, Context context)
		throws IOException, InterruptedException 
		{
		int maxSalary = Integer.MIN_VALUE;
		String name =  " ";
		
		String age = " ";

		String gender = " ";
		
		int salary = 0;
		//iterating through the values corresponding to a particular key
		for(Text val: values)
		{
		String [] valTokens = val.toString().split("\t");
		salary = Integer.parseInt(valTokens[2]);
		//if the new salary is greater than the current maximum salary, update the fields as they will be the output of the reducer after all the values are processed for a particular key
			if(salary > maxSalary)
			{
				name = valTokens[0];
				age = valTokens[1];
				gender = key.toString();
				maxSalary = salary;
			}
		}
		context.write(new Text(name), new Text("age- "+age+"\t"+"gender-"+"\t"+gender+"Max Score-"+"\t"+maxSalary));
		
		}
	}

	public static void main(String[] args) throws Exception
	

	 {
		
		Configuration  conf = new Configuration ();

		Job job = new Job(conf,"Partitionex");
	
	
		
	
	
	job.setJarByClass(Phit.class);
	// configure output and input source
	
	
	job.setInputFormatClass(TextInputFormat.class);
	job.setMapperClass(PMapper.class);
	job.setPartitionerClass(AgePartitioner.class);
	job.setReducerClass(PReducer.class);
	// the number of reducers is set to 3, this can be altered according to
	// the program’s requirements
	job.setNumReduceTasks(3);
	job.setMapOutputKeyClass(Text.class);

	job.setMapOutputValueClass(Text.class);

				
	job.setInputFormatClass(TextInputFormat.class);
							
	 
	job.setOutputFormatClass(TextOutputFormat.class);

	job.setOutputValueClass(Text.class);
							

	FileInputFormat.addInputPath(job, new Path(args[0]));
							
	 
	FileOutputFormat.setOutputPath(job, new Path(args[1]));

	job.waitForCompletion(true);

	// configure output
	
}


}
