package hivefunction;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.hive.ql.exec.UDF;
import org.apache.hadoop.io.Text;
																																																																																							

public class Testudf extends UDF {
	Text t = new Text();

	public Text evaluate (Text str)

	{
	if (str ==null)
	{
		return str;
		
	}
		t.set(StringUtils.strip(str.toString()));
		return t;
	}
	public Text evaluate (Text str, String splchar)

	{
	if (str ==null)
	{
		return str;
		
	}
		t.set(StringUtils.strip(str.toString(), splchar));
		return t;
}

}
