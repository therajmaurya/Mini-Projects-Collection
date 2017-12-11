<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage3.master" AutoEventWireup="true" CodeFile="requestservice.aspx.cs" Inherits="requestservice" %>

<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <form id="form1" runat="server">
        <table style="width: 100%">
            <tr>
                <td style="color: #000000; font-size: large;" class="aligncenter"><strong><em>Please choose a method to Connect to Us:</em></strong></td>
                <td class="aligncenter" style="font-size: large"><em></em></td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>
                    <asp:RadioButton ID="RadioButton1" runat="server" style="font-size: small; color: #808080" Text="Consult our faculty via direct Call." />
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>
                    <asp:RadioButton ID="RadioButton2" runat="server" style="color: #808080; font-size: small;" Text="Consult our faculty via text (sms, whatsapp, facebook, gmail etc.)" />
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="font-size: small; color: #999999">If you want to specify your time preference, specify here :</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>
                    <asp:TextBox ID="TextBox1" runat="server" Width="822px"></asp:TextBox>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>
                    <asp:Button ID="Button1" runat="server" BorderStyle="None" CssClass="button" Height="32px" Text="Submit" Width="112px" />
                </td>
                <td>&nbsp;</td>
            </tr>
        </table>
&nbsp;</form>
</asp:Content>

