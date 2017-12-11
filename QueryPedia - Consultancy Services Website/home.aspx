<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage2.master" AutoEventWireup="true" CodeFile="home.aspx.cs" Inherits="home" %>

<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <span style="font-size: small">We are a committed team of professionals each of whom have propelled us to collaborate with highly successful personnel of different domains to provide solutions to those who find themselves vexed with no hands on guidance.</br></br></span>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder2" Runat="Server">
    <span style="font-size: small">We shall keep updating you with important information throughout the year and help you keep pace with time.Come and experience the revolutionary way of approaching academics.
You seek…we provide solutions.<br/><br/>
</span>
</asp:Content>
<asp:Content ID="Content3" ContentPlaceHolderID="ContentPlaceHolder3" Runat="Server">
    <form id="form1" runat="server">
    <table style="width: 100%">
        <tr>
            <td style="font-size: medium; width: 87px">Username :</td>
            <td>
                <asp:TextBox ID="TextBox1" runat="server" Height="20px" Width="125px"></asp:TextBox>
            </td>
        </tr>
        <tr>
            <td style="font-size: medium; width: 87px">&nbsp;</td>
            <td>&nbsp;</td>
        </tr>
        <tr>
            <td style="font-size: medium; width: 87px">Password :</td>
            <td>
                <asp:TextBox ID="TextBox2" runat="server" Height="18px" Width="125px" TextMode="Password"></asp:TextBox>
            </td>
        </tr>
        <tr>
            <td style="width: 87px">&nbsp;</td>
            <td>&nbsp;</td>
        </tr>
        <tr>
            <td style="width: 87px">&nbsp;</td>
            <td>
                <asp:Button ID="Button1" runat="server" Text="Login" Width="113px" CssClass="button" ForeColor="White" Height="36px" OnClick="Button1_Click" />
            </td>
        </tr>
        <tr>
            <td style="width: 87px">&nbsp;</td>
            <td>&nbsp;</td>
        </tr>
        <tr>
            <td style="width: 87px">&nbsp;</td>
            <td>
                <asp:HyperLink ID="HyperLink1" runat="server" NavigateUrl="~/reset.aspx">forgot passoword ?</asp:HyperLink>
            </td>
        </tr>
        <tr>
            <td style="width: 87px; height: 18px;"></td>
            <td style="height: 18px">
                <asp:HyperLink ID="HyperLink2" runat="server" NavigateUrl="~/registration.aspx">New User !!</asp:HyperLink>
            </td>
        </tr>
        <tr>
            <td style="width: 87px">&nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
</form>
</asp:Content>

<asp:Content ID="Content4" runat="server" contentplaceholderid="ContentPlaceHolder4">
    <asp:Label ID="Label1" runat="server" style="font-size: small; color: #00CCFF"></asp:Label>
</asp:Content>


