package hadoop;
import java.io.IOException;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
//import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.input.TextInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.apache.hadoop.mapreduce.lib.output.TextOutputFormat;


//	import org.apache.hadoop.mapred.jobcontrol.Job;

//import org.apache.hadoop.mapreduce.Reducer;

//import com.sun.jersey.core.impl.provider.entity.XMLJAXBElementProvider.Text;

public class Sales {
	
public static class salesmap extends Mapper<LongWritable, Text, Text, Text>
	
{
		

//private static final Text All = new Text("ALL");	 	
			
public  void map(LongWritable key, Text value, Context context) throws IOException,
 InterruptedException 
			
{

String[] str = value.toString().split("\t");
			
 String year = str[0].toString();
 String jan =   str[1];
 String feb  =   str[2];
 String janfeb = year + "\t" + jan +"\t" +feb;
 
 
// NullWritable nw = NullWritable.get();
	

//long totalSal= Long.parseLong(str[1]) + Long.parseLong(str[2]);
		
 //String  janfeb = year + "\t"+ totalSal;
			 
			
			
context.write(new Text(), new Text( janfeb));







 }

			
 }








//public Text key;


			
		
public static  class salreduce extends Reducer<Text, Text, Text, Text>
		
{
	 //NullWritable NULL = NullWritable.get();
				String year;
				
public  void reduce(Text key, Iterable<Text> values, Context context)
 throws IOException, InterruptedException 
			
 {


 year = " ";
 
 
long maxSal = -1;
long totalsal =0;
long saljan=0,salfeb=0;





for ( Text val : values)
{

	String[] str = val.toString().split("\t");
	
	 saljan =Long.parseLong(str[1]);
	 
	 salfeb = Long.parseLong(str[2]);
	  totalsal = saljan + salfeb;
	 

	if (totalsal > maxSal) 
	{
		maxSal = totalsal;
		year = str[0];
	}
}


context.write((key),new Text("year"+"\t"+year+"\t"+"MaxSal"+"\t"+ maxSal));
//context.write(new Text(key), new Text(janfeb));

 }
}

				
			
						 
			
			 
				

public static void main(String[] args) throws Exception

 {

Configuration  conf = new Configuration ();
					    
					
 
Job job = new Job(conf,"Sales");
					  
  
job.setJarByClass(Sales.class);
job.setMapperClass(salesmap.class);

job.setMapOutputKeyClass(Text.class);

job.setMapOutputValueClass(Text.class);

job.setReducerClass(salreduce.class);
			
job.setInputFormatClass(TextInputFormat.class);
						
 
job.setOutputFormatClass(TextOutputFormat.class);

job.setOutputValueClass(Text.class);
						

FileInputFormat.addInputPath(job, new Path(args[0]));
						
 
FileOutputFormat.setOutputPath(job, new Path(args[1]));

job.waitForCompletion(true);
					    

}	
				


}
