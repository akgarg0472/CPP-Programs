/*outtextxy() implementation*/
#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    settextstyle(6,0,5);
    outtextxy(60,275,"Always keep smiling");

    getch();
    closegraph();
    return 0;
}
