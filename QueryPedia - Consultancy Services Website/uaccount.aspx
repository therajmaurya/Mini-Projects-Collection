<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage3.master" AutoEventWireup="true" CodeFile="uaccount.aspx.cs" Inherits="uaccount" %>

<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <form id="form1" runat="server">
        <table style="width: 100%">
            <tr>
                <td style="height: 122px; font-weight: 700; color: #FF0000; " colspan="2"><span style="font-size: small; color: #000000">E-Mail:&nbsp;</span><span style="color: #999999"><span style="font-size: small">&nbsp;</span></span><span style="color: #999999; font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span style="font-size: small; font-weight: normal; color: #666666"> </span><span style="font-size: small; font-weight: normal">
                    <asp:Label ID="Label1" runat="server" style="color: #999999"></asp:Label>
                    </span>
                    <br style="color: #999999; font-size: small" />
                    <span style="color: #999999">
                    <br style="font-size: small" />
                    </span><span style="font-size: small; color: #000000">Name :&nbsp;</span><span style="color: #999999; font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><span style="font-weight: normal; font-size: small; color: #999999">&nbsp;</span><span style="color: #999999; font-size: small">&nbsp; </span><span style="font-weight: normal; font-size: small; color: #999999">&nbsp;</span><span style="font-weight: normal; font-size: small"><asp:Label ID="Label4" runat="server" style="color: #999999"></asp:Label>
                    </span><span style="color: #999999; font-size: small">
                    <br />
                    <br />
                    </span><span style="font-size: small; color: #000000">Course:</span><span style="color: #000000; font-size: small">&nbsp;&nbsp;</span><span style="color: #999999; font-size: small">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><span style="font-weight: normal; color: #999999; font-size: small">&nbsp;
                    <asp:Label ID="Label3" runat="server"></asp:Label>
                    </span>
                    <br style="color: #999999; font-size: small" />
                    <br />
                </td>
                <td style="height: 122px; width: 157px">
                    <asp:Image ID="Image1" runat="server" Height="146px" Width="159px" />
                </td>
                <td style="height: 122px; " colspan="2">
                    <table style="width: 100%">
                        <tr>
                            <td style="width: 229px">&nbsp;</td>
                            <td>&nbsp;</td>
                            <td>&nbsp;</td>
                        </tr>
                        <tr>
                            <td style="width: 229px">&nbsp;</td>
                            <td>
                                <asp:Button ID="Button1" runat="server" BorderStyle="None" CssClass="button" Height="33px" OnClick="Button1_Click" Text="My Profile" Width="152px" />
                            </td>
                            <td>&nbsp;</td>
                        </tr>
                        <tr>
                            <td style="height: 26px; width: 229px"></td>
                            <td style="height: 26px">
                                <asp:Button ID="Button2" runat="server" BorderStyle="None" CssClass="button" Height="33px" OnClick="Button2_Click" Text="Request Service" Width="152px" />
                            </td>
                            <td style="height: 26px"></td>
                        </tr>
                        <tr>
                            <td style="width: 229px">&nbsp;</td>
                            <td>
                                <asp:Button ID="Button3" runat="server" BorderStyle="None" CssClass="button" Height="33px" OnClick="Button3_Click" Text="Logout !!" Width="152px" />
                            </td>
                            <td>&nbsp;</td>
                        </tr>
                    </table>
                </td>
            </tr>
            <tr>
                <td style="width: 153px"></td>
                <td style="width: 147px"></td>
                <td style="width: 157px"></td>
                <td style="width: 144px"></td>
                <td></td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td style="width: 147px">&nbsp;</td>
                <td style="width: 157px">&nbsp;</td>
                <td style="width: 144px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td style="width: 147px">&nbsp;</td>
                <td style="width: 157px">&nbsp;</td>
                <td style="width: 144px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px; font-size: small;">
                    <strong>Last Login :</strong></td>
                <td colspan="3">
                    <asp:Label ID="Label9" runat="server" style="font-size: small; color: #999999"></asp:Label>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td style="width: 147px; color: #999999;">&nbsp;</td>
                <td style="width: 157px">&nbsp;</td>
                <td style="width: 144px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px; font-size: small;"><strong>Package Details :</strong></td>
                <td colspan="3">
                    <asp:Label ID="Label8" runat="server" style="font-size: small; color: #999999" Text="No package opted yet !! Please choose one."></asp:Label>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td style="width: 147px; color: #999999;">&nbsp;</td>
                <td style="width: 157px">&nbsp;</td>
                <td style="width: 144px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px; font-size: small;"><strong>Payment Status :</strong></td>
                <td colspan="3">
                    <asp:Label ID="Label7" runat="server" style="font-size: small; color: #999999" Text="Unpaid"></asp:Label>
&nbsp;<span style="color: #999999; font-size: small">!!!</span></td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td style="width: 147px">&nbsp;</td>
                <td style="width: 157px">&nbsp;</td>
                <td style="width: 144px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px; font-size: small;"><strong>Service Details :</strong></td>
                <td colspan="3" rowspan="3">
                    <asp:Label ID="Label6" runat="server" style="font-size: small; color: #999999" Text="No services availed yet !!"></asp:Label>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td style="width: 147px">&nbsp;</td>
                <td style="width: 157px">&nbsp;</td>
                <td style="width: 144px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px; font-size: small;">
                    &nbsp;<strong> Notifications :</strong></td>
                <td colspan="3" rowspan="5">
                    <asp:Label ID="Label5" runat="server" Font-Italic="False" ForeColor="#999999" Text="You do not have any notification yet !!" style="font-size: small"></asp:Label>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 153px"></td>
                <td></td>
            </tr>
            <tr>
                <td style="width: 153px">&nbsp;</td>
                <td style="width: 147px">&nbsp;</td>
                <td style="width: 157px">&nbsp;</td>
                <td style="width: 144px">&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
        </table>
    </form>
</asp:Content>


