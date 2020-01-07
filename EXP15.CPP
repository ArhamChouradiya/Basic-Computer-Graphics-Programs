#include <iostream.h>
#include <dos.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	double x,y;
	cout<<"Print sine wave\nArham Chouradiya\n17115013\n20/8/2019";
	int angle=0,xm,ym;
	xm=getmaxx();
	ym=getmaxy();
	line(0,ym/2,xm,ym/2);
	for(x=0;x<xm;x+=2)
	{
		delay(20);
		y=100*sin(angle*3.141592/180);
		y=ym/2-y;
		putpixel(x,y,5);
		angle+=2;
	}
	getch();
	closegraph();
	return 0;
}
