#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void wheels(int,int);
void wheelsdelay(int x,int y);

void car();
void carmaking();
void cardriving();

void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

cleardevice();
setcolor(49);

carmaking();
delay(1000);
cardriving();
delay(1000);
cleardevice();
car();


getch();
}

void cardriving()
{
  for(int i=-300;i<=450;i++)
  {
  delay(5);
  cleardevice();


  setcolor(49);
settextstyle(10,0,2);
outtextxy(50,80,"Digital Graphics Wireframe Model");

setcolor(7);
settextstyle(11,0,1);
outtextxy(250,130,".....A \"Techno Knights\" Group Presentation");

setcolor(49);


int a[]={0,420,0,460,650,460,650,420};
fillpoly(4,a);

wheels(410+i,410);
wheels(100+i,410);
wheels(155+i,395);
wheels(470+i,395);

line(100+i,425,410+i,425);
line(100+i,395,410+i,395);
line(155+i,380,470+i,380);
line(155+i,410,470+i,410);
line(138+i,407,372+i,407);
line(193+i,392,432+i,392);


line(117+i,392,62+i,392);
line(62+i,410,7+i,410);
line(7+i,410,62+i,392);

line(448+i,413,503+i,413);
line(508+i,395,563+i,395);
line(503+i,413,563+i,395);

arc(410+i,410,0,90,95);
line(410+i,315,80+i,305);
arc(470+i,395,0,90,95);
line(470+i,300,430+i,295);

int b[]={432+i,297,380+i,300,340+i,250,390+i,250,432+i,297};
drawpoly(5,b);
int c[]={370+i,305,330+i,255,280+i,255,280+i,300,370+i,305};
drawpoly(5,c);
arc(370+i,305,125,177,20);

line(376+i,305,331+i,248);
line(376+i,305,435+i,298);
line(376+i,305,376+i,390);
line(270+i,250,270+i,390);

int d[]={331+i,248,385+i,245,200+i,243,150+i,248,331+i,248};
drawpoly(5,d);
int e[]={260+i,303,260+i,255,175+i,255,175+i,302,260+i,303};
drawpoly(5,e);

line(150+i,248,80+i,305);
line(165+i,252,165+i,355);

int f[]={157+i,252,94+i,300,157+i,300,157+i,252};
drawpoly(4,f);

arc(110+i,400,107,185,100);

int g[]={510+i,370,515+i,380,545+i,370,540+i,360,510+i,370};
drawpoly(5,g);

   delay(15);
  }
}

void car()
{
setcolor(49);
settextstyle(10,0,2);
outtextxy(50,80,"Digital Graphics Wireframe Model");

setcolor(7);
settextstyle(11,0,1);
outtextxy(250,130,".....A \"Techno Knights\" Group Presentation");

setcolor(2);
settextstyle(4,0,7);
outtextxy(280,150,"Thank You!");


setcolor(49);


int a[]={10,420,100,460,640,460,550,420};
fillpoly(4,a);

wheels(410,410);
wheels(100,410);
wheels(155,395);
wheels(470,395);

line(100,425,410,425);
line(100,395,410,395);
line(155,380,470,380);
line(155,410,470,410);
line(138,407,372,407);
line(193,392,432,392);


line(117,392,62,392);
line(62,410,7,410);
line(7,410,62,392);

line(448,413,503,413);
line(508,395,563,395);
line(503,413,563,395);

arc(410,410,0,90,95);
line(410,315,80,305);
arc(470,395,0,90,95);
line(470,300,430,295);

int b[]={432,297,380,300,340,250,390,250,432,297};
drawpoly(5,b);
int c[]={370,305,330,255,280,255,280,300,370,305};
drawpoly(5,c);
arc(370,305,125,177,20);

line(376,305,331,248);
line(376,305,435,298);
line(376,305,376,390);
line(270,250,270,390);

int d[]={331,248,385,245,200,243,150,248,331,248};
drawpoly(5,d);
int e[]={260,303,260,255,175,255,175,302,260,303};
drawpoly(5,e);

line(150,248,80,305);
line(165,252,165,355);

int f[]={157,252,94,300,157,300,157,252};
drawpoly(4,f);

arc(110,400,107,185,100);

int g[]={510,370,515,380,545,370,540,360,510,370};
drawpoly(5,g);



}

void carmaking()
{
settextstyle(10,0,2);
outtextxy(50,80,"Digital Graphics Wireframe Model");

setcolor(7);
settextstyle(11,0,1);
outtextxy(250,130,".....A \"Techno Knights\" Group Presentation");

setcolor(49);


int a[]={10,420,100,460,640,460,550,420};
delay(700);
fillpoly(4,a);

delay(700);
wheelsdelay(410,410);
delay(400);
wheelsdelay(100,410);
delay(400);
wheelsdelay(155,395);
delay(400);
wheelsdelay(470,395);

delay(400);
line(100,425,410,425);
delay(400);
line(100,395,410,395);
delay(400);
line(155,380,470,380);
delay(400);
line(155,410,470,410);
delay(400);
line(138,407,372,407);
delay(400);
line(193,392,432,392);


delay(400);
line(117,392,62,392);
delay(400);
line(62,410,7,410);
delay(400);
line(7,410,62,392);

delay(400);
line(448,413,503,413);
delay(400);
line(508,395,563,395);
delay(400);
line(503,413,563,395);

delay(400);
arc(410,410,0,90,95);
delay(400);
line(410,315,80,305);
delay(400);
arc(470,395,0,90,95);
delay(400);
line(470,300,430,295);

int b[]={432,297,380,300,340,250,390,250,432,297};
delay(400);
drawpoly(5,b);
int c[]={370,305,330,255,280,255,280,300,370,305};
delay(400);
drawpoly(5,c);
delay(400);
arc(370,305,125,177,20);

delay(400);
line(376,305,331,248);
delay(400);
line(376,305,435,298);
delay(400);
line(376,305,376,390);
delay(400);
line(270,250,270,390);

int d[]={331,248,385,245,200,243,150,248,331,248};
delay(400);
drawpoly(5,d);
int e[]={260,303,260,255,175,255,175,302,260,303};
delay(400);
drawpoly(5,e);

delay(400);
line(150,248,80,305);
delay(400);
line(165,252,165,355);

int f[]={157,252,94,300,157,300,157,252};
delay(400);
drawpoly(4,f);

delay(400);
arc(110,400,107,185,100);

int g[]={510,370,515,380,545,370,540,360,510,370};
delay(400);
drawpoly(5,g);


}

void wheelsdelay(int x,int y)
{
 circle(x,y,10);
 delay(400);
 circle(x,y,15);
 delay(400);
 circle(x,y,30);
 delay(400);
 circle(x,y,35);
 delay(400);
 line(x-30,y,x-15,y);
 delay(400);
 line(x,y+15,x,y+30);
 delay(400);
 line(x+15,y,x+30,y);
 delay(400);
 line(x,y-30,x,y-15);
 delay(400);
 arc(x,y,0,180,38);
}

void wheels(int x,int y)
{
 circle(x,y,10);
 circle(x,y,15);
 circle(x,y,30);
 circle(x,y,35);
 line(x-30,y,x-15,y);
 line(x,y+15,x,y+30);
 line(x+15,y,x+30,y);
 line(x,y-30,x,y-15);
 arc(x,y,0,180,38);
}




