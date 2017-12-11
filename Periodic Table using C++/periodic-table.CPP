#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<graphics.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>

int periodic_table();
void element_detail(int);
void background_pixels(int);
void logo(int);
char show_result(int);
void fun();
char generate_test();
void outline();
void intro_page();
void show_date(int,int);
void thank_you();

//****************************************************************
//                         MAIN FUNCTION
//****************************************************************

void main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   int n;

while(1)
{
    intro_page();
    delay(1000);
    link:
    cleardevice();
    outline();
    n=periodic_table();
if(n==1)
{
   cleardevice();
   delay(1000);
   char d=generate_test();
   delay(500);
   if(d==13)
      goto link;
   else if(d==27)
    {
     delay(1000);
     thank_you();
     delay(1000);
     exit(0);
   }
   else if(d=='n')
   {
    goto link;
   }

}
else if(n==-1)
{
   delay(1000);
   thank_you();
   delay(2000);
   exit(0);
}
else if(n==0)
{
    delay(1000);
    int m;
    cleardevice();
    outline();
    background_pixels(0);
    logo(1);
    setcolor(12);
    show_date(280,440);
    setcolor(11);
    settextstyle(7,0,1);
    outtextxy(100,220,"Enter Atomic No: ");
    outtextxy(120,250,"\"Press Enter\"");
    textcolor(0);
    gotoxy(30,40);
     cin>>m;
    cleardevice();
    element_detail(m);
    delay(2000);
    char l=getch();

   //*************************************************
   //    For Link to Periodic Table  by Enter
   //*************************************************

  if(l==13)
     goto link;

   //*************************************************
   //               for exit by esc
   //*************************************************

else if(l==27)
{
   thank_you();
   delay(1000);
   exit(0);
}

   }
 }
}

//***********************************************************
//         To provide background to Questions
//***********************************************************

void fun()
{       cleardevice();
	logo(14);
	 background_pixels(0);
	settextstyle(7,0,0);
	setcolor(WHITE);
	outtextxy(230,5,"Question");
	setcolor(1);
	ellipse(300,80,0,360,250,20);
	line(0,80,50,80);
	line(550,80,700,80);
	line(0,150,60,150);
	ellipse(170,150,0,360,110,20);
	line(0,220,60,220);
	ellipse(170,220,0,360,110,20);
	line(0,290,60,290);
	ellipse(170,290,0,360,110,20);
	line(0,360,60,360);
	ellipse(170,360,0,360,110,20);
	ellipse(300,430,0,360,250,20);
	line(0,430,50,430);
	line(550,430,700,430);
	setcolor(WHITE);
	settextstyle(11,0,1);

}

//*******************************************************
//           To generate test & for questions
//*******************************************************

char generate_test()
{
	 int p,n;
	 char ch,c;
	linkr:
	p=1;
	n=0;
	if(p==1)
	{
	link1:
	fun();
	outtextxy(120,80,"Which one of following is radioactive element?");
	outtextxy(100,150,"1:    Hydrogen");
	outtextxy(100,220,"2:    Zinc");
	outtextxy(100,290,"3:    Germanium");
	outtextxy(100,360,"4:    Francium");

	ch=getch();
	if(ch==49)
	{
	delay(500);
	setcolor(4);
	ellipse(170,150,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==50)
	{
	delay(500);
	setcolor(4);
	ellipse(170,220,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==51)
	{
	delay(500);
	setcolor(4);
	ellipse(170,290,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==52)
	{
	delay(500);
	setcolor(2);
	ellipse(170,360,0,360,110,20);
	outtextxy(230,430,"Right Answer");
	n++;
	}
	else
	{
	delay(500);
	outtextxy(230,430,"Invalid Selection");
	goto link1;
	}
	p++;
	delay(1000);
	}
	if(p==2)
	{
	link2:
	fun();
	outtextxy(120,80,"Which halogen is a solid at STP?");
	outtextxy(100,150,"1:    Fluorine");
	outtextxy(100,220,"2:    Chlorine");
	outtextxy(100,290,"3:    Bromine");
	outtextxy(100,360,"4:    Iodine");

	ch=getch();
	if(ch==49)
	{
	delay(500);
	setcolor(4);
	ellipse(170,150,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==50)
	{
	delay(500);
	setcolor(4);
	ellipse(170,220,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==51)
	{
	delay(500);
	setcolor(4);
	ellipse(170,290,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==52)
	{
	delay(500);
	setcolor(2);
	ellipse(170,360,0,360,110,20);
	outtextxy(230,430,"Right Answer");
	n++;
	}
	else
	{
	delay(500);
	outtextxy(230,430,"Invalid Selection");
	goto link2;
	}
	p++;
	delay(1000);
	}
	if(p==3)
	{
	link3:
	fun();
	outtextxy(90,80,"At 298K, in which phase most of the known elements exist?");
	outtextxy(100,150,"1:    Liquid");
	outtextxy(100,220,"2:    Solid");
	outtextxy(100,290,"3:    Gas");
	outtextxy(100,360,"4: Supercooled Liquid");

	ch=getch();
	if(ch==49)
	{
	delay(500);
	setcolor(4);
	ellipse(170,150,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==50)
	{
	delay(500);
	setcolor(2);
	ellipse(170,220,0,360,110,20);
	outtextxy(230,430,"Right Answer");
	n++;
	}
	else if(ch==51)
	{
	delay(500);
	setcolor(4);
	ellipse(170,290,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==52)
	{
	delay(500);
	setcolor(4);
	ellipse(170,360,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");

	}
	else
	{
	delay(500);
	outtextxy(230,430,"Invalid Selection");
	goto link3;
	}
	p++;
	delay(1000);
	}
	if(p==4)
	{
	link4:
	fun();
	outtextxy(110,80,"Which of the following ions has the smallest radius?");
	outtextxy(100,150,"1: Fluorine ion (-1)");
	outtextxy(100,220,"2: Chlorine ion (-1)");
	outtextxy(100,290,"3: Calcium ion (+2)");
	outtextxy(100,360,"4: Potassium ion (+1)");

	ch=getch();
	if(ch==49)
	{
	delay(500);
	setcolor(2);
	ellipse(170,150,0,360,110,20);
	outtextxy(230,430,"Right Answer");
	n++;
	}
	else if(ch==50)
	{
	delay(500);
	setcolor(4);
	ellipse(170,220,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==51)
	{
	delay(500);
	setcolor(4);
	ellipse(170,290,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==52)
	{
	delay(500);
	setcolor(4);
	ellipse(170,360,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");

	}
	else
	{
	delay(500);
	outtextxy(230,430,"Invalid Selection");
	goto link4;
	}
	p++;
	delay(500);
	}
	if(p==5)
	{
	link5:
	fun();
	outtextxy(100,80,"Which of Group 14 elements has most metallic properties?");
	outtextxy(100,150,"1:    Germanium");
	outtextxy(100,220,"2:    Carbon");
	outtextxy(100,290,"3:    Lead");
	outtextxy(100,360,"4:    Silicon");

	ch=getch();
	if(ch==49)
	{
	delay(500);
	setcolor(4);
	ellipse(170,150,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==50)
	{
	delay(500);
	setcolor(4);
	ellipse(170,220,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");
	}
	else if(ch==51)
	{
	delay(500);
	setcolor(2);
	ellipse(170,290,0,360,110,20);
	outtextxy(230,430,"Right Answer");
	n++;
	}
	else if(ch==52)
	{
	delay(500);
	setcolor(4);
	ellipse(170,360,0,360,110,20);
	outtextxy(230,430,"Wrong Answer");

	}
	else
	{
	delay(500);
	outtextxy(230,430,"Invalid Selection");
	goto link5;
	}
	p++;
	delay(1000);
	}
	if(p==6)
	{
	delay(1000);
	cleardevice();
	c=show_result(n);
	if (c=='y')
	goto linkr;
	}
 return c;
}

//**************************************************
//          To show atomic structure logo
//**************************************************

   void logo(int i)
   {
   setcolor(i);
   circle(440,240,0);
   circle(440,240,1);
   circle(440,240,2);
   circle(440,240,3);
   circle(440,240,4);

   ellipse(440,240,0,360,80,20);
   ellipse(440,240,0,360,20,80);

    arc(290,150,305,355,200);
    arc(595,320,125,175,200);
    arc(480,168,0,90,10);
    arc(402,307,125,280,7);

    arc(305,350,15,65,200);
    arc(575,130,195,245,200);
    arc(390,178,90,183,8);
    arc(490,303,265,368,8);
    }
//*******************************************************
//               To display first page
//*******************************************************

void intro_page()
{
   int p=0;
   while(p!=20)
   {
    p++;
    delay(500);
    cleardevice();
    background_pixels(0);
    setcolor(11);
    settextstyle(1,0,0);
  outtextxy(230,160,"Welcome");
  outtextxy(275,200,"to");
  outtextxy(200,240,"Periodic Table");
  settextstyle(11,0,1);
  outtextxy(470,430,"Designed By :");
  outtextxy(470,440,"Raj Kr.Maurya");

  }
 }

 //***************************************************
 //                Thnaks Giving Page
 //***************************************************

 void thank_you()
 {
    int p=0;
   while(p!=1)
   {
    p++;
    delay(500);
    cleardevice();
    outline();
    background_pixels(0);
    settextstyle(7,0,1);
    setcolor(2);
    outtextxy(210,50,"Raj Maurya says");
    logo(1);
    setcolor(11);
    settextstyle(1,0,0);
    outtextxy(90,170,"Thank You");
  outtextxy(150,210,"for");
  outtextxy(115,250,"Visiting");
  settextstyle(11,0,1);
  setcolor(12);
  outtextxy(470,430,"Designed By :");
  outtextxy(470,440,"Raj Kr.Maurya");
  show_date(30,430);
  }
   }

//****************************************************
//                 To draw outline
//****************************************************

   void outline()
   {
   setcolor(2);
   line(10,0,10,480);
   line(0,10,600,10);
   line(0,470,600,470);
   line(590,0,590,480);
   }

//*****************************************************
//            To Display Result By Graph
//*****************************************************

char show_result(int i)
{
	int perc=i*20;      //Since only five Questions.
	outline();
	background_pixels(300);
	logo(11);
	settextstyle(7,0,1);
	setcolor(12);
	outtextxy(160,200,"Graph Plot");
	outtextxy(220,40,"Your Test Result");
	setcolor(WHITE);
	if(i==0)
	{
	outtextxy(70,120,"Correct Answers   : ");
	outtextxy(70,150,"Marks' Percentage : 0%");
	}
	else if(i==1)
	{outtextxy(70,120,"Correct Answers   : 1");
	outtextxy(70,150,"Marks' Percentage : 20%");
	}
	else if(i==2)
	{outtextxy(70,120,"Correct Answers   : 2");
	outtextxy(70,150,"Marks' Percentage : 40%");
	}
	else if(i==3)
	{outtextxy(70,120,"Correct Answers   : 3");
	outtextxy(70,150,"Marks' Percentage : 60%");
	}
	else if(i==4)
	{outtextxy(70,120,"Correct Answers   : 4");
	outtextxy(70,150,"Marks' Percentage : 80%");
	}
	else if(i==5)
	{outtextxy(70,120,"Correct Answers   : 5");
	outtextxy(70,150,"Marks' Percentage : 100%");
	}
   setlinestyle(SOLID_LINE,0,0);

   line(50,450,300,450);
   line(300,450,295,445);
   line(300,450,295,455);

   line(70,470,70,230);
   line(70,230,65,235);
   line(70,230,75,235);

   settextstyle(11,0,1);
   outtextxy(65,215,"Y");
   outtextxy(305,450,"X");
   outtextxy(58,455,"O");

   setfillstyle(WIDE_DOT_FILL,GREEN);
   bar(120,448-perc*2,160,448);

   setfillstyle(XHATCH_FILL,RED);
   bar(200,448-(100-perc)*2,240,448);
   setcolor(2);
   outtextxy(120,460,"Right");
   setcolor(4);
   outtextxy(200,460,"Wrong");
   outtextxy(365,375,"Want to Try Again?? (y/n)");
   char ch=getch();
   return ch;
}

//***************************************************
//       To display current system date & time
//***************************************************

void show_date(int x,int y)
{
char t[10],d[10];
  _strdate(d);
  _strtime(t);
  outtextxy(x,y,d);
  outtextxy(x,y+10,t);

}
//******************************************************************
//                       Periodic Table
//******************************************************************

   int periodic_table()
   {
   settextstyle(7,HORIZ_DIR,2);
   setcolor(12);
   outtextxy(230,20,"Periodic Table");

    //*************************************************************
   //     To draw horizontal lines of s,p,d-block elements
   //*************************************************************

    setcolor(9);
   line(30,90,30,300);
   line(60,90,60,300);
   line(90,120,90,300);
   line(120,180,120,300);
   line(150,180,150,300);
   line(180,180,180,300);
   line(210,180,210,300);
   line(240,180,240,300);
   line(270,180,270,300);
   line(300,180,300,300);
   line(330,180,330,300);
   line(360,180,360,300);
   line(390,120,390,300);
   line(420,120,420,300);
   line(450,120,450,300);
   line(480,120,480,300);
   line(510,120,510,300);
   line(540,90,540,300);
   line(570,90,570,300);

   //*************************************************************
   //     To draw horizontal lines of s,p,d-block elements
   //*************************************************************

    setcolor(9);
   line(30,90,60,90);
   line(540,90,570,90);
   line(30,120,90,120);
   line(390,120,570,120);
   line(30,150,90,150);
   line(390,150,570,150);
   line(30,180,570,180);
   line(30,210,570,210);
   line(30,240,570,240);
   line(30,270,570,270);
   line(30,300,570,300);

   //*****************************************************
   //        To draw outlines of f-block elements
   //*****************************************************

   line(150,340,570,340);
   line(150,370,570,370);
   line(150,400,570,400);
    setcolor(9);
   line(150,340,150,400);
   line(180,340,180,400);
   line(210,340,210,400);
   line(240,340,240,400);
   line(270,340,270,400);
   line(300,340,300,400);
   line(330,340,330,400);
   line(360,340,360,400);
   line(390,340,390,400);
   line(420,340,420,400);
   line(450,340,450,400);
   line(480,340,480,400);
   line(510,340,510,400);
   line(540,340,540,400);
   line(570,340,570,400);

   //*****************************************
   //         To make indicator box
   //*****************************************

      setcolor(RED);
   line(180,90,210,90);
   line(180,120,210,120);

   line(180,90,180,120);
   line(210,90,210,120);

   //***********************************
   //      For search box option
   //***********************************

   setcolor(WHITE);
   settextstyle(2,HORIZ_DIR,0);
   outtextxy(20,455,"Want Element Details?");
   outtextxy(40,410,"Press Enter");
   setcolor(12);
   circle(65,440,15);

   //**************************************
   //       For Test option
   //**************************************

   setcolor(25);
   settextstyle(4,HORIZ_DIR,2);
   outtextxy(170,420,"Want to Test Your Knowledge (y/n)?");
   setcolor(WHITE);
   settextstyle(2,HORIZ_DIR,1);
   outtextxy(250,471,"Press Esc to Exit");

   //*****************************************
   //     For classification as spdf
   //*****************************************

   line(100,165,380,165);
   line(100,165,105,160);
   line(100,165,105,170);
   line(380,165,375,160);
   line(380,165,375,170);


   line(30,75,90,75);
   line(30,75,35,70);
   line(30,75,35,80);
   line(90,75,85,70);
   line(90,75,85,80);

   line(390,75,570,75);
   line(390,75,395,70);
   line(390,75,395,80);
   line(570,75,565,70);
   line(570,75,565,80);

   line(150,325,570,325);
   line(150,325,155,320);
   line(150,325,155,330);
   line(570,325,565,320);
   line(570,325,565,330);

   settextstyle(2,HORIZ_DIR,0);
   outtextxy(40,63,"s-Block");
   outtextxy(220,152,"d-Block");
   outtextxy(450,62,"p-Block");
   outtextxy(330,312,"f-Block");

   //***************************************
   //        For indicator box
   //***************************************

   settextstyle(2,HORIZ_DIR,0);
   outtextxy(191,100,"X");
   outtextxy(200,90,"a");
   outtextxy(182,107,"z");
   setcolor(YELLOW);
   line(207,97,240,97);
   line(197,106,240,106);
   line(188,115,240,115);
   setcolor(GREEN);
   outtextxy(242,90,"Mass Noumber");
   outtextxy(242,99,"Element Symbol");
   outtextxy(242,108,"Atomic Number");

   setcolor(12);

    //********************************************
    //       To show the element names
    //********************************************

    settextstyle(2,HORIZ_DIR,0);
    outtextxy(40,100,"H");
    outtextxy(40,130,"Li");
    outtextxy(40,160,"Na");
    outtextxy(43,190,"K");
    outtextxy(40,220,"Rb");
    outtextxy(40,250,"Cs");
    outtextxy(40,280,"Fr");
    outtextxy(70,130,"Be");
    outtextxy(70,160,"Mg");
    outtextxy(70,190,"Ca");
    outtextxy(70,220,"Sr");
    outtextxy(70,250,"Ba");
    outtextxy(70,280,"Ra");
    outtextxy(100,190,"Sc");
    outtextxy(100,220,"Y");
    outtextxy(100,250,"La");
    outtextxy(100,280,"Ac");
    outtextxy(130,190,"Ti");
    outtextxy(130,220,"Zr");
    outtextxy(130,250,"Hf");
    outtextxy(130,280,"Rf");
    outtextxy(160,190,"V");
    outtextxy(160,220,"Nb");
    outtextxy(160,250,"Ta");
    outtextxy(160,280,"Db");
    outtextxy(190,190,"Cr");
    outtextxy(190,220,"Mo");
    outtextxy(190,250,"W");
    outtextxy(190,280,"Sg");
    outtextxy(220,190,"Mn");
    outtextxy(220,220,"Tc");
    outtextxy(220,250,"Re");
    outtextxy(220,280,"Bh");
    outtextxy(250,190,"Fe");
    outtextxy(250,220,"Ru");
    outtextxy(250,250,"Os");
    outtextxy(250,280,"Hs");
    outtextxy(280,190,"Co");
    outtextxy(280,220,"Rh");
    outtextxy(280,250,"Ir");
    outtextxy(280,280,"Mt");
    outtextxy(310,190,"Ni");
    outtextxy(310,220,"Pd");
    outtextxy(310,250,"Pt");
    outtextxy(310,280,"Ds");
    outtextxy(340,190,"Cu");
    outtextxy(340,220,"Ag");
    outtextxy(340,250,"Au");
    outtextxy(340,280,"Rg");
    outtextxy(370,190,"Zn");
    outtextxy(370,220,"Cd");
    outtextxy(370,250,"Hg");
    outtextxy(367,280,"Uub");
    setcolor(2);
    outtextxy(400,130,"B");
    setcolor(12);
    outtextxy(400,160,"Al");
    outtextxy(400,190,"Ga");
    outtextxy(400,220,"In");
    outtextxy(400,250,"Tl");
    outtextxy(397,280,"Uut");
    outtextxy(430,130,"C");
    setcolor(2);
    outtextxy(430,160,"Si");
    outtextxy(430,190,"Ge");
    setcolor(12);
    outtextxy(430,220,"Sn");
    outtextxy(430,250,"Pb");
    outtextxy(427,280,"Uuq");
    outtextxy(460,130,"N");
    outtextxy(460,160,"P");
    setcolor(2);
    outtextxy(460,190,"As");
    outtextxy(460,220,"Sb");
    setcolor(15);
    outtextxy(460,250,"Pb");
    outtextxy(457,280,"Uup");
    outtextxy(490,130,"O");
    outtextxy(490,160,"S");
    outtextxy(490,190,"Se");
    setcolor(2);
    outtextxy(490,220,"Te");
    outtextxy(490,250,"Po");
    setcolor(12);
    outtextxy(487,280,"Uuh");
    outtextxy(520,130,"F");
    outtextxy(520,160,"Cl");
    outtextxy(520,190,"Br");
    outtextxy(520,220,"I");
    outtextxy(520,250,"At");
    outtextxy(517,280,"Eka");
    outtextxy(550,100,"He");
    outtextxy(550,130,"Ne");
    outtextxy(550,160,"Ar");
    outtextxy(550,190,"Kr");
    outtextxy(550,220,"Xe");
    outtextxy(550,250,"Rn");
    outtextxy(547,280,"Uuo");

    outtextxy(160,350,"Ce");
    outtextxy(190,350,"Pr");
    outtextxy(220,350,"Nd");
    outtextxy(250,350,"Pm");
    outtextxy(280,350,"Sm");
    outtextxy(310,350,"Eu");
    outtextxy(340,350,"Gd");
    outtextxy(370,350,"Tb");
    outtextxy(400,350,"Dy");
    outtextxy(430,350,"Ho");
    outtextxy(460,350,"Er");
    outtextxy(490,350,"Tm");
    outtextxy(520,350,"Yb");
    outtextxy(550,350,"Lu");

    outtextxy(160,380,"Th");
    outtextxy(190,380,"Pa");
    outtextxy(220,380,"U");
    outtextxy(250,380,"Np");
    outtextxy(280,380,"Pu");
    outtextxy(310,380,"Am");
    outtextxy(340,380,"Cm");
    outtextxy(370,380,"Bk");
    outtextxy(400,380,"Cf");
    outtextxy(430,380,"Es");
    outtextxy(460,380,"Fm");
    outtextxy(490,380,"Md");
    outtextxy(520,380,"No");
    outtextxy(550,380,"Lr");

    //**************************************************
    //     To show A & Z of s,p,d-block elements
    //**************************************************

    setcolor(WHITE);
    outtextxy(45,95,"1");
    outtextxy(35,105,"1");

    outtextxy(50,120,"7");
    outtextxy(35,138,"3");

    outtextxy(47,150,"23");
    outtextxy(32,168,"11");

    outtextxy(45,180,"40");
    outtextxy(33,198,"20");

    outtextxy(47,212,"85");
    outtextxy(33,228,"37");

    outtextxy(42,242,"133");
    outtextxy(32,258,"55");

    outtextxy(42,270,"223");
    outtextxy(32,288,"87");

    outtextxy(80,122,"9");
    outtextxy(63,138,"4");

    outtextxy(78,152,"24");
    outtextxy(62,168,"12");

    outtextxy(78,182,"40");
    outtextxy(62,198,"20");

    outtextxy(75,212,"88");
    outtextxy(62,228,"38");

    outtextxy(73,242,"137");
    outtextxy(62,258,"56");

    outtextxy(73,272,"226");
    outtextxy(62,288,"88");

    outtextxy(107,182,"45");
    outtextxy(92,198,"21");

    outtextxy(107,212,"89");
    outtextxy(92,228,"39");

    outtextxy(102,242,"139");
    outtextxy(92,258,"57");
    setcolor(15);
    outtextxy(93,242,"*");
    setcolor(WHITE);

    outtextxy(104,272,"227");
    outtextxy(92,288,"89");
    setcolor(15);
    outtextxy(93,272,"**");
    setcolor(WHITE);

    outtextxy(137,182,"48");
    outtextxy(122,198,"22");

    outtextxy(137,212,"91");
    outtextxy(122,228,"40");

    outtextxy(133,242,"179");
    outtextxy(122,258,"72");

    outtextxy(133,272,"261");
    outtextxy(122,288,"104");

    outtextxy(167,182,"51");
    outtextxy(152,198,"23");

    outtextxy(167,212,"93");
    outtextxy(152,228,"41");

    outtextxy(163,242,"181");
    outtextxy(152,258,"73");

    outtextxy(163,272,"262");
    outtextxy(152,288,"105");

    outtextxy(198,180,"52");
    outtextxy(182,199,"23");

    outtextxy(197,212,"96");
    outtextxy(182,228,"42");

    outtextxy(192,242,"184");
    outtextxy(183,258,"74");

    outtextxy(192,272,"262");
    outtextxy(180,290,"105");

    outtextxy(226,181,"55");
    outtextxy(212,198,"25");

    outtextxy(226,212,"98");
    outtextxy(212,228,"43");

    outtextxy(223,242,"186");
    outtextxy(212,258,"75");

    outtextxy(223,272,"264");
    outtextxy(212,288,"107");

    outtextxy(255,181,"56");
    outtextxy(242,198,"26");

    outtextxy(253,211,"101");
    outtextxy(242,228,"44");

    outtextxy(253,241,"190");
    outtextxy(242,258,"76");

    outtextxy(253,271,"277");
    outtextxy(242,288,"108");

    outtextxy(285,181,"59");
    outtextxy(272,198,"27");

    outtextxy(282,211,"103");
    outtextxy(272,228,"45");

    outtextxy(282,241,"192");
    outtextxy(272,258,"77");

    outtextxy(282,271,"268");
    outtextxy(272,288,"109");

    outtextxy(317,181,"59");
    outtextxy(303,198,"28");

    outtextxy(312,211,"106");
    outtextxy(303,228,"46");

    outtextxy(312,241,"195");
    outtextxy(303,258,"78");

    outtextxy(312,271,"271");
    outtextxy(303,288,"110");

    outtextxy(346,181,"64");
    outtextxy(333,198,"29");

    outtextxy(342,211,"108");
    outtextxy(333,229,"47");

    outtextxy(342,241,"197");
    outtextxy(333,259,"79");

    outtextxy(342,271,"272");
    outtextxy(333,289,"111");

    outtextxy(377,181,"65");
    outtextxy(363,199,"30");

    outtextxy(372,211,"112");
    outtextxy(363,229,"48");

    outtextxy(372,241,"201");
    outtextxy(363,259,"80");

    outtextxy(372,271,"285");
    outtextxy(363,289,"112");

    outtextxy(407,121,"11");
    outtextxy(393,139,"5");

    outtextxy(407,151,"27");
    outtextxy(393,169,"13");

    outtextxy(407,181,"70");
    outtextxy(393,199,"31");

    outtextxy(402,211,"115");
    outtextxy(393,229,"49");

    outtextxy(402,241,"204");
    outtextxy(393,259,"81");

    outtextxy(402,271,"284");
    outtextxy(393,289,"113");

    outtextxy(437,121,"12");
    outtextxy(422,139,"6");

    outtextxy(437,151,"28");
    outtextxy(422,169,"14");

    outtextxy(437,181,"73");
    outtextxy(422,199,"32");

    outtextxy(432,211,"119");
    outtextxy(422,229,"50");

    outtextxy(432,241,"207");
    outtextxy(422,259,"82");

    outtextxy(432,271,"289");
    outtextxy(422,289,"114");

    outtextxy(467,121,"14");
    outtextxy(452,139,"5");

    outtextxy(467,151,"31");
    outtextxy(452,169,"15");

    outtextxy(467,181,"75");
    outtextxy(452,199,"33");

    outtextxy(462,211,"122");
    outtextxy(452,229,"51");

    outtextxy(462,241,"209");
    outtextxy(452,259,"83");

    outtextxy(462,271,"288");
    outtextxy(452,289,"115");

    outtextxy(497,120,"16");
    outtextxy(482,139,"8");

    outtextxy(497,151,"32");
    outtextxy(482,169,"16");

    outtextxy(497,181,"78");
    outtextxy(482,199,"34");

    outtextxy(492,211,"128");
    outtextxy(482,229,"52");

    outtextxy(492,241,"209");
    outtextxy(482,259,"84");

    outtextxy(492,271,"292");
    outtextxy(482,289,"116");

    outtextxy(527,121,"19");
    outtextxy(512,139,"9");

    outtextxy(527,151,"35");
    outtextxy(512,169,"17");

    outtextxy(527,181,"80");
    outtextxy(512,199,"35");

    outtextxy(522,211,"127");
    outtextxy(512,229,"53");

    outtextxy(522,241,"210");
    outtextxy(512,259,"85");

    outtextxy(522,271,"294");
    outtextxy(512,289,"117");

    outtextxy(561,91,"4");
    outtextxy(544,109,"2");

    outtextxy(557,121,"20");
    outtextxy(542,139,"10");

    outtextxy(557,151,"40");
    outtextxy(542,169,"18");

    outtextxy(557,181,"84");
    outtextxy(542,199,"36");

    outtextxy(552,211,"131");
    outtextxy(542,229,"54");

    outtextxy(552,241,"222");
    outtextxy(542,259,"86");

    outtextxy(552,271,"294");
    outtextxy(542,289,"118");

    //*******************************************
    //    To show A & Z of f-block elements
    //*******************************************

    outtextxy(162,341,"140");
    outtextxy(152,359,"58");

    outtextxy(192,341,"141");
    outtextxy(182,359,"59");

    outtextxy(222,341,"144");
    outtextxy(218,359,"60");

    outtextxy(252,341,"145");
    outtextxy(242,359,"61");

    outtextxy(282,341,"150");
    outtextxy(272,359,"62");

    outtextxy(312,341,"151");
    outtextxy(302,359,"63");

    outtextxy(342,341,"157");
    outtextxy(332,359,"64");

    outtextxy(372,341,"159");
    outtextxy(362,359,"65");

    outtextxy(402,341,"163");
    outtextxy(392,359,"66");

    outtextxy(432,341,"165");
    outtextxy(422,359,"67");

    outtextxy(462,341,"167");
    outtextxy(452,359,"68");

    outtextxy(492,341,"169");
    outtextxy(482,359,"69");

    outtextxy(522,341,"173");
    outtextxy(512,359,"70");

    outtextxy(552,341,"175");
    outtextxy(542,359,"71");

    outtextxy(162,371,"232");
    outtextxy(152,389,"90");

    outtextxy(192,371,"231");
    outtextxy(182,389,"91");

    outtextxy(222,371,"238");
    outtextxy(212,389,"92");

    outtextxy(252,371,"237");
    outtextxy(242,389,"93");

    outtextxy(282,371,"244");
    outtextxy(272,389,"94");

    outtextxy(312,371,"243");
    outtextxy(302,389,"95");

    outtextxy(342,371,"247");
    outtextxy(332,389,"96");

    outtextxy(372,371,"247");
    outtextxy(362,389,"97");

    outtextxy(402,371,"251");
    outtextxy(392,389,"98");

    outtextxy(432,371,"252 ");
    outtextxy(422,389,"99");

    outtextxy(462,371,"257");
    outtextxy(452,389,"100");

    outtextxy(492,371,"258");
    outtextxy(482,389,"101");

    outtextxy(522,371,"259");
    outtextxy(512,389,"102");

    outtextxy(552,371,"262");
    outtextxy(542,389,"103");

    char ch=getch();
    if(ch=='y' || ch=='Y')
    return 1;
    else if(ch==13)
    return 0;
    else if(ch==27)
    return -1;
    else
    return 2;
}

//*************************************************************
//                  To Show Element Details
//*************************************************************

void element_detail(int i)
{
background_pixels(0);
outline();
logo(14);
	settextstyle(7,0,0);
	setcolor(WHITE);
	outtextxy(180,40,"Element Details");
	settextstyle(11,0,1);
	outtextxy(50,130,"Period            :");
	outtextxy(50,160,"Group             :");
	outtextxy(50,190,"Classification    :");
	outtextxy(50,220,"State             :");
	outtextxy(50,250,"Radius            :");
	outtextxy(50,280,"Density           :");
	outtextxy(50,310,"Electronegativity :");
	outtextxy(50,340,"Melting Point     :");
	outtextxy(50,370,"Boiling Point     :");
	outtextxy(50,400,"Appearance        :");

	if(i==1)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Hydrogen");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"1");
	outtextxy(210,160,"1 [IA]");
	outtextxy(210,190,"Non Metal");
	outtextxy(210,220,"Gas");
	outtextxy(210,250,"2.08 pm");
	outtextxy(210,280,"0.0899 g/l");
	outtextxy(210,310,"2.2");
	outtextxy(210,340,"14.01 K");
	outtextxy(210,370,"20.28 K");
	outtextxy(210,400,"Colourless, Odourless");
	}
	else if(i==2)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Helium");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"1");
	outtextxy(210,160,"18 [VIIIA]");
	outtextxy(210,190,"Inert Gas");
	outtextxy(210,220,"Gas");
	outtextxy(210,250,"--");
	outtextxy(210,280,"0.1785 g/l");
	outtextxy(210,310,"0");
	outtextxy(210,340,"0.95 K");
	outtextxy(210,370,"4.216 K");
	outtextxy(210,400,"Inert Colourless Odourless");
	}
	else if(i==3)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Lithium");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"2");
	outtextxy(210,160,"1 [IA]");
	outtextxy(210,190,"Alkali Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.55 pm");
	outtextxy(210,280,"0.53 g/l");
	outtextxy(210,310,"0.98");
	outtextxy(210,340,"553.69 K");
	outtextxy(210,370,"1118 K");
	outtextxy(210,400,"Soft, Silvery White Metal");
	}
	else if(i==4)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Berrylium");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"2");
	outtextxy(210,160,"2 [IIA]");
	outtextxy(210,190,"Alkaline Earth Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.12 pm");
	outtextxy(210,280,"1.85 g/l");
	outtextxy(210,310,"1.57");
	outtextxy(210,340,"1551 K");
	outtextxy(210,370,"3243 K");
	outtextxy(210,400,"Hard,Brittle,Steel-gray metal");
	}
	else if(i==5)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Boran");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"2");
	outtextxy(210,160,"13 [IIIA]");
	outtextxy(210,190,"Semimetallic");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"0.98 pm");
	outtextxy(210,280,"2.34 g/l");
	outtextxy(210,310,"2.04");
	outtextxy(210,340,"2573 K");
	outtextxy(210,370,"3931 K");
	outtextxy(210,400,"Hard, Brittle,Lusturous Black");
	}
	else if(i==6)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Carbon");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"2");
	outtextxy(210,160,"14 [IVA]");
	outtextxy(210,190,"Non Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"0.91 pm");
	outtextxy(210,280,"2.26 g/l");
	outtextxy(210,310,"2.55");
	outtextxy(210,340,"3820 K");
	outtextxy(210,370,"5100 K");
	outtextxy(210,400,"Dense, Black");
	}
	else if(i==7)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Nitrogen");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"2");
	outtextxy(210,160,"15 [VA]");
	outtextxy(210,190,"Non Metal");
	outtextxy(210,220,"Gas");
	outtextxy(210,250,"0.92 pm");
	outtextxy(210,280,"1.251 g/l");
	outtextxy(210,310,"3.04");
	outtextxy(210,340,"63.29 K");
	outtextxy(210,370,"77.4 K");
	outtextxy(210,400,"Colourless,Odourless,Tasteless,Generally Inert");
	}
	else if(i==8)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Oxygen");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"2");
	outtextxy(210,160,"16 [VIA]");
	outtextxy(210,190,"Non Metal");
	outtextxy(210,220,"Gas");
	outtextxy(210,250,"0.65 pm");
	outtextxy(210,280,"1.429 g/l");
	outtextxy(210,310,"3.44");
	outtextxy(210,340,"54.8 K");
	outtextxy(210,370,"90.19 K");
	outtextxy(210,400,"Colourless,Odourless,Tasteless");
	}
	else if(i==9)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Fluorine");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"2");
	outtextxy(210,160,"17 [VIIA]");
	outtextxy(210,190,"Halogen");
	outtextxy(210,220,"Gas");
	outtextxy(210,250,"0.57 pm");
	outtextxy(210,280,"1.696 g/l");
	outtextxy(210,310,"3.98");
	outtextxy(210,340,"53.53 K");
	outtextxy(210,370,"85.01 K");
	outtextxy(210,400,"Greenish Yellow,Pungent,Corrosive gas");
	}
	else if(i==10)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Neon");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"2");
	outtextxy(210,160,"18 [VIIIA]");
	outtextxy(210,190,"Inert gas");
	outtextxy(210,220,"Gas");
	outtextxy(210,250,"0.51 pm");
	outtextxy(210,280,"0.9 g/l");
	outtextxy(210,310,"0");
	outtextxy(210,340,"48 K");
	outtextxy(210,370,"27.1 K");
	outtextxy(210,400,"Colourless Odourless,Tasteless");
	}
	else if(i==11)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Sodium");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"3");
	outtextxy(210,160,"1 [IA]");
	outtextxy(210,190,"Alkali Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.9 pm");
	outtextxy(210,280,"0.97 g/l");
	outtextxy(210,310,"0.93");
	outtextxy(210,340,"371 K");
	outtextxy(210,370,"1156 K");
	outtextxy(210,400,"Soft, Silvery White");
	}
	else if(i==12)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Magnesium");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"3");
	outtextxy(210,160,"2 [IIA]");
	outtextxy(210,190,"Alkaline Earth Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.6 pm");
	outtextxy(210,280,"1.74 g/l");
	outtextxy(210,310,"1.31");
	outtextxy(210,340,"922 K");
	outtextxy(210,370,"1363 K");
	outtextxy(210,400,"Light Weight, Malleable,Silvery Whitess");
	}
	else if(i==13)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Aluminium");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"3");
	outtextxy(210,160,"13 [IIIA]");
	outtextxy(210,190,"Other Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.43 pm");
	outtextxy(210,280,"2.7 g/l");
	outtextxy(210,310,"1.61");
	outtextxy(210,340,"934 K");
	outtextxy(210,370,"2740 K");
	outtextxy(210,400,"Soft, Lightweight,Silvery White");
	}
	else if(i==14)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Silicon");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"3");
	outtextxy(210,160,"14 [IVA]");
	outtextxy(210,190,"Semimetallic");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.32 pm");
	outtextxy(210,280,"2.33 g/l");
	outtextxy(210,310,"1.9");
	outtextxy(210,340,"1683 K");
	outtextxy(210,370,"2628 K");
	outtextxy(210,400,"Amorphous-Brown Powder,Crystalline form has Gray");
	}
	else if(i==15)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Phosphorus");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"3");
	outtextxy(210,160,"15 [VA]");
	outtextxy(210,190,"Non Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.28 pm");
	outtextxy(210,280,"1.82 g/l");
	outtextxy(210,310,"2.19");
	outtextxy(210,340,"317.3 K");
	outtextxy(210,370,"553 K");
	outtextxy(210,400,"White Form-Waxy");
	}
	else if(i==16)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Sulphur");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"3");
	outtextxy(210,160,"16 [VIA]");
	outtextxy(210,190,"Non Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.27 pm");
	outtextxy(210,280,"2.07 g/l");
	outtextxy(210,310,"2.58");
	outtextxy(210,340,"386 K");
	outtextxy(210,370,"717.824 K");
	outtextxy(210,400,"Light Yellow,Odourless,Tasteless,Brittle");
	}
	else if(i==17)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Chlorine");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"3");
	outtextxy(210,160,"17 [VIIA]");
	outtextxy(210,190,"Halogen");
	outtextxy(210,220,"Gas");
	outtextxy(210,250,"0.97 pm");
	outtextxy(210,280,"3.214 g/l");
	outtextxy(210,310,"3.16");
	outtextxy(210,340,"172.2 K");
	outtextxy(210,370,"238.6 K");
	outtextxy(210,400,"Greenish Yellow");
	}
	else if(i==18)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Argon");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"3");
	outtextxy(210,160,"18");
	outtextxy(210,190,"Inert Gas");
	outtextxy(210,220,"Gas");
	outtextxy(210,250,"0.88 pm ");
	outtextxy(210,280,"1.784 g/l");
	outtextxy(210,310,"0");
	outtextxy(210,340,"83.8 K");
	outtextxy(210,370,"87.3 K");
	outtextxy(210,400,"Colourless, Tasteless,Odourless");
	}
	else if(i==19)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Potassium");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"4");
	outtextxy(210,160,"1 [IA]");
	outtextxy(210,190,"Alkali Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"2.35 pm");
	outtextxy(210,280,"0.86 g/l");
	outtextxy(210,310,"0.82");
	outtextxy(210,340,"336.8 K");
	outtextxy(210,370,"1047 K");
	outtextxy(210,400,"Soft,Waxy,Silvery White");
	}
	else if(i==20)
	{
	setcolor(2);
	settextstyle(8,0,1);
	outtextxy(260,85,"Calcium");
	setcolor(WHITE);
	settextstyle(11,0,1);
	outtextxy(210,130,"4");
	outtextxy(210,160,"2 [IIA]");
	outtextxy(210,190,"Alkaline Earth Metal");
	outtextxy(210,220,"Solid");
	outtextxy(210,250,"1.97 pm");
	outtextxy(210,280,"1.55 g/l");
	outtextxy(210,310,"1");
	outtextxy(210,340,"1112 K");
	outtextxy(210,370,"1757 K");
	outtextxy(210,400,"Fairly Hard,Silvery White");
	}

	else
	{
	setcolor(4);
	outtextxy(160,100,"Sorry, Element Record Does Not Exist !");
	}
//***************************************************************
//         Details are upto atomic number 20 only.
//***************************************************************
}

//*******************************************************
//             For putting pixels on screen
//*******************************************************

void background_pixels(int l)
{
    randomize();
    int i,j,k;
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
    i=random(595)+l;
    j=random(475);
    k=random(15)+1;
   putpixel(i,j,k);
  }



