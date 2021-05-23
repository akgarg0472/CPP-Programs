/*Graphic Program*/
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<changecolor.h> //manual header file
#include<gotoxy.h>  //manual header file

using namespace std;

int main()
{
    /** setconsolecolor(console_text_color,console_bg_color) (Custom Method)
    fillellipse(x,y,x_radius,y_radius)
    setcolor(color) used to set drawing color
    getcolor() used to retrieve current drawing color
    setbkcolor(color) used to set background color
    getbkcolor() used to retrieve current background color
    getmaxcolor() used to retrieve current driver colors support
    setfillstyle(pattern,color) used to set current fill style & color
    floodfill(x,y,color) used to apply the changes of setfillstyle
    ellipse(x,y,start_angle,end_angle,x_radius,y_radius)
    rectangle(left,top,right,bottom);
    circle(center_x,center_y,radius)
    line(x1,y1,x2,y2) */

    setconsolecolor(0,15);

    cout<<"\n\n   Test Graphic Program";

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    if(graphresult()!=0)
    {
        cout<<"unable to start graphic mode, "<<grapherrormsg(graphresult());
        getch();
        return -1;
    }

    setcolor(YELLOW);

    setfillstyle(8,6);

    line(200,55,350,55);

    circle(100,100,50);
    floodfill(100,100,14);

    rectangle(250,90,400,140);
    floodfill(300,100,14);

    ellipse(250,200,0,360,50,25);
    floodfill(260,210,14);

    //default fill color is WHITE
    fillellipse(200,270,50,30);

    getch();
    closegraph();
    return 0;
}
