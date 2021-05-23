/*CPP Program to draw a bar chart/graph*/
#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;

int main()
{
    //bar(left,top,right,bottom) used to draw 2D rectangular bar
    //bar3d(left,top,right,bottom,depth,topflag) used to draw 3D rectangular bar

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setfillstyle(8,14);
    bar3d(200,40,220,160,7,1);
    bar3d(240,40,260,160,7,1);
    bar3d(280,40,300,160,7,1);
    bar3d(320,40,340,160,7,1);
    bar3d(360,40,380,160,7,1);
    line(190,160,400,160);
    line(190,160,190,30);

    getch();
    closegraph();

    return 0;
}
