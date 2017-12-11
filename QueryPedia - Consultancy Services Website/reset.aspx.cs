using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

public partial class reset : System.Web.UI.Page

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
    protected void Button2_Click(object sender, EventArgs e)
    {
        cn.Open();
        cmd = new SqlCommand("Select * from registration where email='" + TextBox3.Text + "'", cn);
        rd = cmd.ExecuteReader();
        if (rd.Read())
        {

            Session["uname"] = TextBox3.Text;
            Session["sq"] = rd[10].ToString();
            Session["sa"] = rd[11].ToString();
            Label1.Text = Session["sq"].ToString();
        }
        else
        {
            Label3.Text = "Invalid Username!!";
        }
        cn.Close();
    }
    protected void Button1_Click(object sender, EventArgs e)
    {

        if (TextBox2.Text == Session["sa"].ToString())
        {

            Response.Redirect("resetpass.aspx");
        }
        else
            Label2.Text = "Invalid security answer!!";
    }
}