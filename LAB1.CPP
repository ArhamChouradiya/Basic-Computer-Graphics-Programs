#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{       clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print a Circle\nArham Chouradiya \n17115013\n06/08/19";
	circle(300,200,100);
	getch();
	closegraph();
}