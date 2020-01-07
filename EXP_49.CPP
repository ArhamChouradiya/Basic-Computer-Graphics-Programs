#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,n;
float r=0,g=0,b=0;
float y=0,i=0,q=0;
float c=0,m=0,y1=0;

initgraph(&gd,&gm,"..\\bgi");
printf("ARHAM CHOURADIYA\n");
printf("17115013\n");
printf("15/10/2019\n");
printf("(r,g,b)keys for incrementing R,G,B values respectively\n");
printf("(shift+(r,g,b))keys for decrementing R,G,B values respectively\n");
printf("press esc to exit\n");
setcolor(15);
while(1)
{
gotoxy(18,10);
printf("R G B");
c=1.0-r;
m=1.0-g;
y1=1.0-y;
gotoxy(47,10);
printf("C M Y");
y=0.299*r+0.587*g+0.144*b;
i=0.596*r-0.275*g-0.3218*b;
q=0.212*r-0.528*g+0.311*b;
gotoxy(18,23);
printf("Y I Q");
switch(getche())
{
case 'r':
r++;
break;
case 'g':
g++;
break;
case 'b':
b++;
break;
case 'R':
r--;
break;
case 'G':
g--;
break;
case 'B':
b--;
break;
case 27:
closegraph();
exit(0);
}
if(r>255)
r=0;
if(g>255)
g=0;
if(b>255)
b=0;
setrgbpalette(1,r,g,b);
setfillstyle(1,1);
bar(150,150,270,250);
rectangle(150,150,270,250);
setrgbpalette(2,c,m,y1);
setfillstyle(1,2);
bar(275,150,395,250);
rectangle(275,150,395,250);
setrgbpalette(3,y,i,q);
setfillstyle(1,3);
bar(150,255,270,355);
rectangle(150,255,270,355);
}
}