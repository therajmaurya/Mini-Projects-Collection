<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="registration.aspx.cs" Inherits="registration" %>

<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <form id="form1" runat="server">
        <table style="width: 100%">
            <caption>
                <strong>Welcome to QueriPaedia Registration Page !!</strong></caption>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px; color: #FF0000"><strong>Consultancy Required :</strong></td>
                <td style="width: 266px">
                    <asp:RadioButton ID="rbEntrance" runat="server" Text=" Entrance Exams &amp; Career Oportunities" GroupName="Raj" />
                </td>
                <td>
                    &nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">
                    <asp:RadioButton ID="rbAcademic" runat="server" Text=" Academic Aid (Motivational &amp; Study Materials)" GroupName="Raj" />
                </td>
                <td>
                    &nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Course :</td>
                <td style="width: 266px">
                    <asp:DropDownList ID="ddlCourse" runat="server" Height="20px" Width="161px">
                        <asp:ListItem>B.Tech UPSEE</asp:ListItem>
                        <asp:ListItem>B.Tech JEE-Mains</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px; height: 22px">E-mail ID :</td>
                <td style="height: 22px; width: 266px">
                    <asp:TextBox ID="txtEmail" runat="server"></asp:TextBox>
                </td>
                <td style="height: 22px">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" ControlToValidate="txtEmail" ErrorMessage="* Required Field"></asp:RequiredFieldValidator>
                </td>
                <td style="height: 22px"></td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Password :</td>
                <td style="width: 266px">
                    <asp:TextBox ID="txtpass" runat="server" TextMode="Password"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="txtpass" ErrorMessage="* Required Field"></asp:RequiredFieldValidator>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px; height: 22px">Re-enter Password :</td>
                <td style="width: 266px; height: 22px">
                    <asp:TextBox ID="txtrepass" runat="server" TextMode="Password"></asp:TextBox>
                </td>
                <td style="height: 22px">
                    <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="txtpass" ControlToValidate="txtrepass" ErrorMessage="Password Mismatch !!"></asp:CompareValidator>
                </td>
                <td style="height: 22px"></td>
            </tr>
            <tr>
                <td style="width: 250px; height: 18px;"></td>
                <td style="width: 266px; height: 18px;"></td>
                <td style="height: 18px"></td>
                <td style="height: 18px"></td>
            </tr>
            <tr>
                <td style="width: 250px">Salutation :</td>
                <td style="width: 266px">
                    <asp:DropDownList ID="ddlSalute" runat="server" Height="20px" Width="161px">
                        <asp:ListItem>Mr.</asp:ListItem>
                        <asp:ListItem>Mrs.</asp:ListItem>
                        <asp:ListItem>Ms.</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Name :</td>
                <td style="width: 266px">
                    <asp:TextBox ID="txtName" runat="server"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="txtEmail" ErrorMessage="* Required Field"></asp:RequiredFieldValidator>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Gender :</td>
                <td style="width: 266px">
                    <asp:DropDownList ID="ddlGen" runat="server" Height="20px" Width="161px">
                        <asp:ListItem>Male</asp:ListItem>
                        <asp:ListItem>Female</asp:ListItem>
                        <asp:ListItem>Other</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Address :</td>
                <td style="width: 266px">
                    <asp:TextBox ID="txtadrress" runat="server"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px; height: 18px;"></td>
                <td style="width: 266px; height: 18px;"></td>
                <td style="height: 18px"></td>
                <td style="height: 18px"></td>
            </tr>
            <tr>
                <td style="width: 250px; height: 22px;">Contact No :</td>
                <td style="width: 266px; height: 22px;">
                    <asp:TextBox ID="txtcontact" runat="server"></asp:TextBox>
                </td>
                <td style="height: 22px">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="txtcontact" ErrorMessage="* Required Field"></asp:RequiredFieldValidator>
                </td>
                <td style="height: 22px"></td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Profile Picture :</td>
                <td style="width: 266px">
                    <asp:FileUpload ID="FileUploadPic" runat="server" />
                </td>
                <td>
                    &nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Security Question :</td>
                <td style="width: 266px">
                    <asp:DropDownList ID="ddlSecQ" runat="server" Height="20px" Width="161px">
                        <asp:ListItem>Your dogs name?</asp:ListItem>
                        <asp:ListItem>Your mothers maiden name?</asp:ListItem>
                        <asp:ListItem>Website you rarely visit?</asp:ListItem>
                        <asp:ListItem>Your first school?</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>
                    &nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Security Answer :</td>
                <td style="width: 266px">
                    <asp:TextBox ID="txtSecA" runat="server" TextMode="Password"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" ControlToValidate="txtSecA" ErrorMessage="* Required Field"></asp:RequiredFieldValidator>
                </td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px; color: #FF0000"><strong>Academics Deatils*</strong></td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px; text-decoration: underline; color: #FF0000"><strong>XII -</strong></td>
                <td style="width: 266px">&nbsp;</td>
                <td style="text-decoration: underline; color: #FF0000"><strong>X-</strong></td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Year of Passing :</td>
                <td style="width: 266px">
                    <asp:TextBox ID="txtYOPxii" runat="server"></asp:TextBox>
                </td>
                <td>Year of Passing :</td>
                <td>
                    <asp:TextBox ID="txtYOPx" runat="server"></asp:TextBox>
                </td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Percentage obtained in XIIth :</td>
                <td style="width: 266px">
                    <asp:TextBox ID="txtPercXii" runat="server"></asp:TextBox>
                </td>
                <td style="width: 250px">Percentage obtained in Xth :</td>
                <td>
                    <asp:TextBox ID="txtPercX" runat="server"></asp:TextBox>
                </td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">Board :</td>
                <td style="width: 266px">
                    <asp:TextBox ID="txtBoardXii" runat="server"></asp:TextBox>
                </td>
                <td>Board :</td>
                <td>
                    <asp:TextBox ID="txtBoardX" runat="server"></asp:TextBox>
                </td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">
                    <asp:Button ID="Button1" runat="server" Height="32px" Text="Submit" Width="137px" BorderStyle="None" CssClass="button" OnClick="Button1_Click" />
                </td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">&nbsp;</td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">
                    <asp:Label ID="Label2" runat="server" CssClass="txt1" ForeColor="Red"></asp:Label>
                </td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">
                    <asp:Label ID="Label3" runat="server" CssClass="txt1"></asp:Label>
                </td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">
                    <asp:Label ID="Label1" runat="server" ForeColor="Lime"></asp:Label>
                </td>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 250px">&nbsp;</td>
                <td style="width: 266px">
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
                <td>&nbsp;</td>
            </tr>
            </table>
    </form>
</asp:Content>

