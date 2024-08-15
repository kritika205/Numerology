#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <dos.h>
int main{
	int gdriver=DETECT,gmode;
	int x,y,r,k;
	randomize();
	initgraph(&gdriver,&gmode,"C:\\turbo2\\bgi");
	do{
		x=rand()%getmaxx();
		y=rand()%getmaxy()
		r=rand()%20;
		k=(rand()%15)+1;
		setcolor(k);
		circle(x,y,r);
	}while(!kbhit());
	getch();
	closegraph();
	return 0;
}