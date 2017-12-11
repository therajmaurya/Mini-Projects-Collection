package hadoop;

import java.io.IOException;
import org.apache.pig.EvalFunc;
import org.apache.pig.data.Tuple;

public class PigUdf extends EvalFunc<String> {
	
	public String exec(Tuple input) throws IOException
	{
		if (input.size()==0)
			return null;
		try
		{
			String str = (String) input.get(0);
			return str.toUpperCase();
		} 
		catch(Exception e)
		{
			e.getMessage();
		}
		return null;
	}

	
}
