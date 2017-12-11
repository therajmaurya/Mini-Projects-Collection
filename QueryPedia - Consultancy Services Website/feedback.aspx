<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage3.master" AutoEventWireup="true" CodeFile="feedback.aspx.cs" Inherits="feedback" %>

<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <form id="form1" runat="server">
        <table style="width: 100%">
    <tr>
        <td class="aligncenter">&nbsp;<span style="font-size: large; color: #000000; text-decoration: underline;"><strong>Help us with your valuable&nbsp;Feedback :</strong></span>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">1. Was QueriPaedia able to solve your queries ?</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;
            <asp:RadioButton ID="RadioButton1" runat="server" GroupName="1" Text="Yes" />
            &nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;
            <asp:RadioButton ID="RadioButton2" runat="server" GroupName="1" Text="No" />
            &nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">2. Are you satified with the services provided to you during your sessions ?</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;
            <asp:RadioButton ID="RadioButton3" runat="server" GroupName="2" Text="Yes" />
            &nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;
            <asp:RadioButton ID="RadioButton4" runat="server" GroupName="2" Text="No" />
            &nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">3. Will you suggest Queri Paedia to your friends ?</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;
            <asp:RadioButton ID="RadioButton5" runat="server" GroupName="3" Text="Yes" />
            &nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;
            <asp:RadioButton ID="RadioButton6" runat="server" GroupName="3" Text="No" />
            &nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">4. Any Comments from your side ?</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>
            <asp:TextBox ID="TextBox1" runat="server" Width="830px"></asp:TextBox>
        </td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td style="font-size: small">5. Suggestions (if any):</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>
            <asp:TextBox ID="TextBox2" runat="server" Height="16px" Width="829px"></asp:TextBox>
        </td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td>&nbsp;</td>
        <td>&nbsp;</td>
    </tr>
    <tr>
        <td class="alignright" style="text-align: left">
            <asp:Button ID="Button1" runat="server" BorderStyle="None" CssClass="button" Height="34px" Text="Submit" Width="159px" />
        </td>
        <td>&nbsp;</td>
    </tr>
    </table>
    </form>
</asp:Content>

