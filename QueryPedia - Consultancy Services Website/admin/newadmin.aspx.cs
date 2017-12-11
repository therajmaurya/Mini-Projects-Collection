using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

public partial class admin_newadmin : System.Web.UI.Page
{
    SqlCommand cmd;
    SqlConnection cn;

    String s1;

    protected void Page_Load(object sender, EventArgs e)
    {
        ConnectDBS cdbs = new ConnectDBS();
        cn = new SqlConnection();
        cn.ConnectionString = cdbs.connectdbs();
    
        try
        {
            if (Session["login"].ToString() == "admin")
            {
            }
            else
            {
                Response.Redirect("login.aspx");
            }
        }
        catch
        {
            Response.Redirect("login.aspx");
        }
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        cn.Open();
               try
               {
                    s1 = "insert into admin_login values('" + TextBox1.Text + "','" + TextBox2.Text + "')";
                    cmd = new SqlCommand(s1, cn);
                    cmd.ExecuteNonQuery();
                    Label1.Text = "Self User Creation Successful!!";
                }
                catch
                {
                    Label1.Text = "User Creation Unsuccessful!!";
                }
            
            cn.Close();
    }
}