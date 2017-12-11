
import java.io.IOException;

	import org.apache.hadoop.conf.Configuration;
	import org.apache.hadoop.fs.Path;
	import org.apache.hadoop.io.LongWritable;
	import org.apache.hadoop.io.Text;
	import org.apache.hadoop.mapreduce.Job;
	//import org.apache.hadoop.mapred.jobcontrol.Job;
	import org.apache.hadoop.mapreduce.Mapper;
	//import org.apache.hadoop.mapreduce.Mapper.Context;
	//import org.apache.hadoop.mapreduce.Partitioner;
	import org.apache.hadoop.mapreduce.Reducer;
	//import org.apache.hadoop.mapreduce.Reducer.Context;
	import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
	import org.apache.hadoop.mapreduce.lib.input.TextInputFormat;
	import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
	import org.apache.hadoop.mapreduce.lib.output.TextOutputFormat;

public class Marks {
	
	
	
		public static class PMapper extends Mapper<LongWritable, Text, Text, Text> 
		{ 

			
			
			public void map(LongWritable key, Text value, Context context) throws IOException,
			InterruptedException
			{
			
				
			String[] tokens = value.toString().split("\t");
			
			String Results = tokens[0]+"\t"+tokens[1]+"\t"+tokens[2]+"\t"+tokens[3];
			//the mapper emits key, value pair where the key is the gender and the value is the other information which includes name, age and score
			context.write(new Text(), new Text(Results));
			}
			
					
			}
			
		
		public static class PReducer extends Reducer<Text, Text, Text, Text> 
		{
			//@Override
			public  void reduce(Text key, Iterable<Text> values, Context context)
			throws IOException, InterruptedException 
			{
			int maxmarks = Integer.MIN_VALUE;
			String ID =  " ";
			
			String NAME = " ";

			String ENG = " ";
	
			String MATH=" ";
			
			int totalmarks = 0,engi,mathi;
			//iterating through the values corresponding to a particular key
			for(Text val: values)
			{
			String [] valTokens = val.toString().split("\t");
			ID= valTokens[0];
			NAME= valTokens[1];
			ENG= valTokens[2];
			MATH= valTokens[3];
			
			
			engi= Integer.parseInt(ENG);
			mathi=Integer.parseInt(MATH);
			
			totalmarks =  engi + mathi;
			
			//if the new salary is greater than the current maximum salary, update the fields as they will be the output of the reducer after all the values are processed for a particular key
				if(totalmarks > maxmarks)
				{
					
					maxmarks = totalmarks;
				}
			}
			context.write(key, new Text("ID- "+ID+"\t"+"NAME-"+"\t"+NAME+"HIGHEST-"+"\t"+maxmarks));
			
			}
		}

		public static void main(String[] args) throws Exception
		

		 {
			
			Configuration  conf = new Configuration ();

			Job job = new Job(conf,"MARKS");
		
		
			
		
		
		job.setJarByClass(Marks.class);
		// configure output and input source
		
		
		job.setInputFormatClass(TextInputFormat.class);
		job.setMapperClass(PMapper.class);
		//job.setPartitionerClass(AgePartitioner.class);
		job.setReducerClass(PReducer.class);
		// the number of reducers is set to 3, this can be altered according to
		// the program’s requirements
		//job.setNumReduceTasks(3);
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


