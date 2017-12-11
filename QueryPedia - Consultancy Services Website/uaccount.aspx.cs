using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

public partial class uaccount : System.Web.UI.Page
{

    SqlConnection cn;
    SqlCommand cmd;
    SqlDataReader rd;

    protected void Page_Load(object sender, EventArgs e)
    {

        ConnectDBS cdbs = new ConnectDBS();
        cn = new SqlConnection();
        cn.ConnectionString = cdbs.connectdbs();

        try
        {
            if (Session["user"].ToString() == "1")
            {
                 cn.Open();
                 cmd = new SqlCommand("Select * from registration where email='" +Session["login"].ToString()+ "'", cn);
                 rd = cmd.ExecuteReader();
        if (rd.Read())
        {
            Label3.Text = rd[2].ToString();
            Label4.Text = rd[6].ToString();
            Label1.Text = rd[3].ToString();
            Image1.ImageUrl="~\\profilepicture\\"+rd[10].ToString();
        }

            }

            else
            {
                Response.Redirect("home.aspx");
            }
        }
        catch
        {

            Response.Redirect("home.aspx");
        }


    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        Response.Redirect("requestservice.aspx");
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("profile.aspx");
    }
    protected void Button3_Click(object sender, EventArgs e)
    {
        Session["user"] = "2";
        Response.Redirect("home.aspx");
    }
}