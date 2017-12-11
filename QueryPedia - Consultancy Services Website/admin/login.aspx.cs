using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

public partial class admin_root : System.Web.UI.Page
{
    SqlConnection cn;
    SqlCommand cmd;
    SqlDataReader rd;

    protected void Page_Load(object sender, EventArgs e)
    {
        ConnectDBS cdbs = new ConnectDBS();
        cn = new SqlConnection();
        cn.ConnectionString = cdbs.connectdbs();
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        cn.Open();
        String s1 = "Select * from admin_login where userid='" + TextBox1.Text + "'and pass='" + TextBox2.Text + "'";
        cmd = new SqlCommand(s1, cn);
        rd = cmd.ExecuteReader();
        if (rd.Read())
        {
            Session["login"] = "admin";
            Response.Redirect("default.aspx");

        }

        else
        {
            Label1.Text = "Invalid Username or Password";

        }
        rd.Close();
        cn.Close();
    }
}