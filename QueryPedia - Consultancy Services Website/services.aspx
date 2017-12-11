<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage3.master" AutoEventWireup="true" CodeFile="services.aspx.cs" Inherits="Services" %>

<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <form id="form1" runat="server">
        <table style="width: 100%">
            <tr>
                <td colspan="2">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
            </tr>
            <tr>
                <td class="aligncenter" colspan="14" style="font-size: large; color: #808080"><strong>Details of the Service Packages we provide !!</strong></td>
            </tr>
            <tr>
                <td colspan="2">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
            </tr>
            <tr>
                <td colspan="2">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
            </tr>
            <tr>
                <td class="aligncenter" colspan="2" style="color: #00CCFF; font-size: large"><strong>Package : 1</strong></td>
                <td class="aligncenter" colspan="6" style="color: #00CCFF; font-size: large"><strong>Package : 2</strong></td>
                <td class="aligncenter" colspan="6" style="color: #00CCFF; font-size: large"><strong>Package : 3</strong></td>
            </tr>
            <tr style="font-size: small">
                <td class="aligncenter" colspan="2">Silver Membership</td>
                <td class="aligncenter" colspan="6">Gold Membership</td>
                <td class="aligncenter" colspan="6">Platinum Membership</td>
            </tr>
            <tr>
                <td class="aligncenter" colspan="2" style="color: #999999; font-size: small"><strong>Limited access to Services</strong></td>
                <td class="aligncenter" colspan="6" style="color: #999999; font-size: small"><strong>Full access to Services</strong></td>
                <td class="aligncenter" colspan="6" style="color: #999999; font-size: small"><strong>Unlimited Services</strong></td>
            </tr>
            <tr>
                <td colspan="2" style="height: 21px"></td>
                <td colspan="6" style="height: 21px"></td>
                <td colspan="6" style="height: 21px"></td>
            </tr>
            <tr>
                <td class="aligncenter" colspan="2" style="text-decoration: underline; font-size: medium"><strong><em>Services</em></strong></td>
                <td class="aligncenter" colspan="6" style="text-decoration: underline; font-size: medium"><strong><em>Services</em></strong></td>
                <td class="aligncenter" colspan="6" style="text-decoration: underline; font-size: medium"><strong><em>Services</em></strong></td>
            </tr>
            <tr>
                <td class="aligncenter" colspan="2" style="color: #999999">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
            </tr>
            <tr style="font-size: small">
                <td class="aligncenter" colspan="2" style="color: #C0C0C0">Latest News Feeds</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Latest News Feeds</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Latest News Feeds</td>
            </tr>
            <tr style="font-size: small">
                <td class="aligncenter" colspan="2" style="color: #C0C0C0">Career Counselling by Students</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Career Counselling by Ex-Students</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Career Counselling by Students</td>
            </tr>
            <tr style="font-size: small">
                <td class="aligncenter" colspan="2" style="color: #C0C0C0">Session Validity- 12 hours</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Session Validity- 36 hours</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Session Validity- 72 hours</td>
            </tr>
            <tr style="font-size: small">
                <td class="aligncenter" colspan="2" style="color: #C0C0C0">Rank Predictor (Limited Access)</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Rank Predictor (Full Access)</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Rank Predictor (Full Access for 1 year)</td>
            </tr>
            <tr style="font-size: small">
                <td class="aligncenter" colspan="2" style="color: #C0C0C0">Event Manager</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Event Manager</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Event Manager</td>
            </tr>
            <tr style="font-size: small">
                <td class="aligncenter" colspan="2" style="color: #C0C0C0">Choice Filling List Preparation(20 options)</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Choice Filling List Preparation(30 options)</td>
                <td class="aligncenter" colspan="6" style="color: #C0C0C0">Choice Filling List Preparation(50 options)</td>
            </tr>
            <tr>
                <td colspan="2">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
            </tr>
            <tr>
                <td class="alignright">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                    <div style="text-align: left">
                    </div>
                </td>
                <td class="alignright">
                    <asp:Button ID="Button1" runat="server" BorderStyle="None" CssClass="button" Height="32px" Text="Choose..." Width="200px" />
                </td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">
                    <asp:Button ID="Button2" runat="server" BorderStyle="None" CssClass="button" Height="32px" Text="Choose..." Width="200px" />
                </td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">&nbsp;</td>
                <td class="alignright">
                    <asp:Button ID="Button3" runat="server" BorderStyle="None" CssClass="button" Height="32px" Text="Choose..." Width="200px" />
                </td>
            </tr>
            <tr>
                <td colspan="2">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
                <td colspan="6">&nbsp;</td>
            </tr>
        </table>
    </form>
</asp:Content>


