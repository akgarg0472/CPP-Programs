/*Graphics implementation program*/

#include<graphics.h>

/**  0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       10 = Light Green
    3 = Aqua        11 = Light Aqua
    4 = Red         12 = Light Red
    5 = Purple      13 = Light Purple
    6 = Yellow      14 = Light Yellow
    7 = White       15 = Bright White
*/

int main()    //graphical interface
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(14);

    rectangle(40,50,580,110);
    setfillstyle(11,14);
    delay(100);
    floodfill(41,52,14);

    settextstyle(10,0,5);
    setbkcolor(14);
    setcolor(2);
    delay(500);
    outtextxy(100,60,"Hotel Management");

    delay(500);

    setcolor(0);
    setbkcolor(15);
    settextstyle(10,0,6);
    outtextxy(140,190,"Hotel Developer");
    settextstyle(10,0,3);
    setbkcolor(LIGHTGRAY);
    delay(500);
    outtextxy(240,255,"New Delhi");
    setbkcolor(14);
    setcolor(0);
    delay(500);
    settextstyle(10,0,5);
    outtextxy(160,290,"Welcomes you");
    delay(1000);

    setbkcolor(0);
    setcolor(15);
    settextstyle(10,0,3);
    outtextxy(140,420,"Developed by Akhilesh Garg");

    delay(1000);
    getch();
    closegraph();
}
