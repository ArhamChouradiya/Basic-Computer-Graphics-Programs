
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{       clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print a Rectangle\nArham Chouradiya\n17115013\n06/08/19";
	rectangle(200,4,350,300);
       //	arc(100,175,-90,90,175);
       //	line(400,4,400,350);
       //	arc(400,100,-90,90,95);
	getch();
	closegraph();
}