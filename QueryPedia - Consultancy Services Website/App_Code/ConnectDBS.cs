using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

/// <summary>
/// Summary description for ConnectDBS
/// </summary>
public class ConnectDBS
{
    public string connectdbs()
    {
        return @"Data Source=(LocalDB)\v11.0;AttachDbFilename=|DataDirectory|\qpdbs.mdf;Integrated Security=True";
    }


	public ConnectDBS()
	{
		//
		// TODO: Add constructor logic here
		//
	}
}