/*Program of using ellipse and some other graphic functions in C++ using winBGI library*/
#include<graphics.h>    //graphics header file
#include<conio.h>       //contains console I/O methods
#include<stdlib.h>      //contains general purpose methods
#include<iostream>      //used for basic I/O services
using namespace std;
main()
{
    int gd = DETECT, gm;    //initializing graphic driver and mode to auto
    /*Initializing graphic mode*/
    initgraph(&gd,&gm,NULL);

    /*Text data*/
    setcolor(WHITE);
    settextstyle(6,0,5);
    outtextxy(60,275,"Always keep smiling");
    settextstyle(6,0,5);
    outtextxy(88,335,"Dear Best Friend");
    settextstyle(6,0,5);
    setcolor(YELLOW);
    outtextxy(180,395,"*****");

    /*Drawing smiley outside ellipse*/
    setcolor(7);
    ellipse(290,130,0,360,100,100);

    /*Drawing Eyes*/
    setfillstyle(INTERLEAVE_FILL,WHITE);
    fillellipse(250,100,13,13);
    fillellipse(324,100,13,13);

    /*Drawing Nose*/
    setfillstyle(SOLID_FILL,RED);
    fillellipse(285,150,8,8);

    /*Drawing Mouth*/
    setcolor(WHITE);
    ellipse(288,165,190,345,50,33);
    getch();

    /*Exiting from graphic mode*/
    closegraph();
    return 0;
}
