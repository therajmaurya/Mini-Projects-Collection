using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;

public partial class profile : System.Web.UI.Page
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
                cmd = new SqlCommand("Select * from registration where email='" + Session["login"].ToString() + "'", cn);
                rd = cmd.ExecuteReader();
                if (rd.Read())
                {
                    Label1.Text = rd[6].ToString();
                    Label2.Text = rd[7].ToString();
                    Label3.Text = rd[9].ToString();
                    Label4.Text = rd[8].ToString();
                    Label5.Text = rd[16].ToString();
                    Label6.Text = rd[17].ToString();
                    Label7.Text = rd[18].ToString();
                    Label8.Text = rd[1].ToString();
                    Label9.Text = rd[2].ToString();
                    Label10.Text = rd[13].ToString();
                    Label11.Text = rd[14].ToString();
                    Label12.Text = rd[15].ToString();
                
                    Image1.ImageUrl = "~\\profilepicture\\" + rd[10].ToString();
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
}