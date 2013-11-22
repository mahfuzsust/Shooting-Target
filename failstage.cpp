#include<stdio.h>
#include<graphics.h>

void fail_stage()
{
    char str[600];
    cleardevice();
    setcolor(4);
    settextstyle(1,4,4);
    outtextxy(530,200,"SORRY");
    settextstyle(1,4,3);
    setcolor(3);
    sprintf(str,"You just failed to shot required circles");
	outtextxy(600,400,str);
    //outtextxy(700,400,"You just failed to shot required circles");
    //outtextxy(820,450,"Better luck next time.");
    sprintf(str,"Better luck next time......");
	outtextxy(600,500,str);
    delay(5000);
}
