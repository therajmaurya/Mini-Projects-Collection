using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Security.Cryptography;
using System.Text;


public partial class changepas : System.Web.UI.Page
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

        try
        {
            if (Session["user"].ToString() == "1")
            {
               
                

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
    protected void Button1_Click(object sender, EventArgs e)
    {
        cn.Open();
                cmd = new SqlCommand("Select * from registration where email='" + Session["login"].ToString() + "'and pass='" + encrypt(TextBox1.Text) + "'", cn);
                rd = cmd.ExecuteReader();
                if (rd.Read())
                {
                    Response.Redirect("resetpass.aspx");


                   }
              else{

                  Label1.Text="Ïnvaild Password";
                   }


        rd.Close();
        cn.Close();
    }
}