#include<stdio.h>
#include<graphics.h>

void count_down()
{
    cleardevice();
    settextstyle(3,4,6);
    setcolor(6);
    outtextxy(600,400,"READY");
    delay(1500);
    cleardevice();
    setcolor(5);
    outtextxy(640,400,"SET");
    delay(1300);
    cleardevice();
    setcolor(4);
    outtextxy(630,400,"GO");
    delay(1100);
    //cleardevice();
    /*setcolor(6);
    outtextxy(800,400,"START");
    delay(1000);*/

}
