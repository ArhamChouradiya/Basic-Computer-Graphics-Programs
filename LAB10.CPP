#include<iostream.h>
#include<graphics.h>
#include <conio.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print Character\nDivyank Patel\n17115025\n20/8/19";
	line(100,4,100,350);
	arc(100,175,-90,90,175);
	 line(400,4,400,350);
	arc(400,100,-90,90,95);

	getch();
	closegraph();
	return 0;
}
