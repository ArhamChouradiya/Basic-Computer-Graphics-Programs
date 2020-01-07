#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	rectangle(100,100,200,200);   setcolor(9);
	int a[]={50,100,120,120,75,150,120,180,50,200,50,100};
	drawpoly(6,a);

	getch();
	closegraph();
}