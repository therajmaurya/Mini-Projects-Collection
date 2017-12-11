<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="resetpass.aspx.cs" Inherits="resetpass" %>

<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <form id="form1" runat="server">
        <table style="width: 100%">
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px">&nbsp;</td>
                <td style="width: 238px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px">&nbsp;</td>
                <td style="width: 238px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px">&nbsp;</td>
                <td style="font-size: medium; width: 238px; color: #999999;"><em>Enter New Password</em></td>
                <td>
                    <asp:TextBox ID="TextBox1" runat="server" TextMode="Password"></asp:TextBox>
&nbsp;&nbsp;&nbsp;<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="* Required Field"></asp:RequiredFieldValidator>
                    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px">&nbsp;</td>
                <td style="width: 238px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px"><b></b></td>
                <td style="font-size: medium; width: 238px; color: #999999;"><em>Re-</em><strong style="font-weight: normal"><em>Enter New Password</em></strong></td>
                <td>
                    <asp:TextBox ID="TextBox2" runat="server" TextMode="Password"></asp:TextBox>
                &nbsp;&nbsp;
                    <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="TextBox1" ControlToValidate="TextBox2" ErrorMessage="Password Mismatch !!"></asp:CompareValidator>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px">&nbsp;</td>
                <td style="width: 238px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px">&nbsp;</td>
                <td style="width: 238px">&nbsp;</td>
                <td>
                    <asp:Button ID="Button1" runat="server" Height="33px" Text="Submit" Width="130px" BorderStyle="None" CssClass="button" OnClick="Button1_Click" />
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px">&nbsp;</td>
                <td style="width: 238px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="height: 18px"></td>
                <td style="width: 14px; height: 18px;"></td>
                <td style="width: 238px; height: 18px;"></td>
                <td style="height: 18px">
                    <asp:Label ID="Label1" runat="server" style="color: #00FFFF"></asp:Label>
                </td>
                <td style="height: 18px"></td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td style="width: 14px">&nbsp;</td>
                <td style="width: 238px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
        </table>
    </form>
</asp:Content>

