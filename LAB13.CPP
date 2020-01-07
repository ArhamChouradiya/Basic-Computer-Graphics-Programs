#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
       int gd=DETECT,gm;
       initgraph(&gd,&gm,"..\\BGI");
       cout<<"Bresenham circle drawing algorithm\nArham Chouradiya\n17115013\n20/8/19";
	circle(250,250,100);
	getch();
	closegraph();
}
