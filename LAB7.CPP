#include<graphics.h>
#include<constream.h>
#include<math.h>
#include<dos.h>
void main()
{      clrscr();
	int x,y;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Rainbow Drawing Algorithm\nArham Chouradiya\n17115013\n06/08/19";
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=30;i<200;i++)
	{
		delay(20);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
	getch();
	closegraph();



}