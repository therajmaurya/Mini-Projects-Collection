using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class social : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button7_Click(object sender, EventArgs e)
    {
        Response.Redirect("https://www.facebook.com/queripaedia");
    }
    protected void Button8_Click(object sender, EventArgs e)
    {
        Response.Redirect("https://www.gmail.com");
    }
    protected void Button9_Click(object sender, EventArgs e)
    {
        Response.Redirect("https://twitter.com/queripaedia");
    }
    protected void Button10_Click(object sender, EventArgs e)
    {
        Response.Redirect("https://in.linkedin.com/in/queripaedia");
    }
    protected void Button11_Click(object sender, EventArgs e)
    {
        Response.Redirect("home.aspx");
    }
}