using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;
using System.Security.Cryptography;
using System.Text;

public partial class registration : System.Web.UI.Page
{
    SqlConnection cn;
    SqlCommand cmd;

    public string encrypt(String str)
    {
        byte[] pass = Encoding.UTF8.GetBytes(str);
        MD5 x = new MD5CryptoServiceProvider();
        string retpass = Encoding.UTF8.GetString(x.ComputeHash(pass));
        return retpass;
    }

    protected void Page_Load(object sender, EventArgs e)
    {
        ConnectDBS cd = new ConnectDBS();
        cn = new SqlConnection();
        cn.ConnectionString = cd.connectdbs();
    }
    
    protected void Button1_Click(object sender, EventArgs e)
    {
        cn.Open();
        try
        {
            //string pass = encrypt(txtpass.Text);
            string s1=null;
            if (rbEntrance.Checked)
            {
                s1 = "insert into registration values('" + rbEntrance.Text + "','" + ddlCourse.Text + "','" + txtEmail.Text + "','" + encrypt(txtpass.Text) + "','" + ddlSalute.Text + "','" + txtName.Text + "','" + ddlGen.Text + "','" + txtadrress.Text + "','" + txtcontact.Text + "','" + FileUploadPic.FileName + "','" + ddlSecQ.Text + "','" + txtSecA.Text + "','" + txtYOPx.Text + "','" + txtPercX.Text + "','" + txtBoardX.Text + "','" + txtYOPxii.Text + "','" + txtPercXii.Text + "','" + txtBoardXii.Text + "')";
                //Label1.Text = s1;
                cmd = new SqlCommand(s1, cn);
                cmd.ExecuteNonQuery();
                FileUploadPic.SaveAs(Server.MapPath("profilepicture") + "\\" + FileUploadPic.FileName);
                Label1.Text = "Registration Successful!!";
                Label2.Text = "";
                Label3.Text = "";
            }
            else if (rbAcademic.Checked)
            {
                Label2.Text = "Sorry!! This service is temporarily unavailable!!";
                Label1.Text = "";
                Label3.Text = "";
            }
        }
        catch
        {
            Label1.Text = "";
            Label2.Text = "";
            Label3.Text = "Registration Unsuccessful!!";
        }
        cn.Close();
    }

}