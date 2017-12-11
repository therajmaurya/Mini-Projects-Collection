using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Security.Cryptography;
using System.Text;


public partial class home : System.Web.UI.Page
{

    SqlConnection cn;
    SqlCommand cmd;
    SqlDataReader rd;

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
        cn.Open();
        String s1 = "Select * from registration where email='" + TextBox1.Text + "'and pass='" + encrypt(TextBox2.Text) + "'";
        cmd = new SqlCommand(s1, cn);
        rd = cmd.ExecuteReader();
        if (rd.Read())
        {
            Session["user"] = "1";
            Session["login"] = TextBox1.Text;
            Response.Redirect("uaccount.aspx");

        }

        else
        {
            Label1.Text = "Invalid Username or Password";

        }
        rd.Close();
        cn.Close();



    }
}