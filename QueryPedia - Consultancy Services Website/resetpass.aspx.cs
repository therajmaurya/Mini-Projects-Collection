using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Security.Cryptography;
using System.Text;

using System.Data.SqlClient;

public partial class resetpass : System.Web.UI.Page
{
    SqlCommand cmd;
    SqlConnection cn;

    public string encrypt(String str)
    {
        byte[] pass = Encoding.UTF8.GetBytes(str);
        MD5 x = new MD5CryptoServiceProvider();
        string retpass = Encoding.UTF8.GetString(x.ComputeHash(pass));
        return retpass;
    }

    protected void Page_Load(object sender, EventArgs e)
    {
        ConnectDBS cdbs = new ConnectDBS();
        cn = new SqlConnection();
        cn.ConnectionString = cdbs.connectdbs();
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        try
        {

            cn.Open();
            string s1 = "update registration set pass ='" + encrypt(TextBox1.Text) + "' where email= '" + Session["uname"].ToString() + "'";
            cmd = new SqlCommand(s1, cn);
            cmd.ExecuteNonQuery();
            Label1.Text = "Password updation Successfull!!";
            cn.Close();


        }
        catch
        {
            Label1.Text = "Password update Unsuccessful !!";
        }
    }
}