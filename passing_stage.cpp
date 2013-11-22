#include<stdio.h>
#include<graphics.h>

void complete_stage(int n, int p,int N)
{
    cleardevice();
    settextstyle(1,4,4);
    setcolor(7);
    outtextxy(600,200,"Result");
    settextstyle(1,4,1);
    setcolor(6);
    outtextxy(560,300,"Congratulation..");
    outtextxy(560,400,"You just passed stage ");
    if(n==1) outtextxy(830,400,"1");
    else if(n==2) outtextxy(830,400,"2");
    else if(n==3) outtextxy(830,400,"3");
    else if(n==4) outtextxy(830,400,"4");
    else if(n==5) outtextxy(830,400,"5");
    else if(n==6) outtextxy(830,400,"6");
    else if(n==7) outtextxy(830,400,"7");
    else if(n==8) outtextxy(830,400,"8");
    else if(n==9) outtextxy(830,400,"9");
    else if(n==10) outtextxy(830,400,"10");

    outtextxy(560,500,"You shot ");

    if(p==1) outtextxy(680,500,"1");
    else if(p==2) outtextxy(720,500,"2");
    else if(p==3) outtextxy(680,500,"3");
    else if(p==4) outtextxy(680,500,"4");
    else if(p==5) outtextxy(680,500,"5");
    else if(p==6) outtextxy(680,500,"6");
    else if(p==7) outtextxy(680,500,"7");
    else if(p==8) outtextxy(680,500,"8");
    else if(p==9) outtextxy(680,500,"9");
    else if(p==10) outtextxy(680,500,"10");
    else if(p==11) outtextxy(680,500,"11");
    else if(p==12) outtextxy(680,500,"12");
    else if(p==13) outtextxy(680,500,"13");
    else if(p==14) outtextxy(680,500,"14");
    else if(p==15) outtextxy(680,500,"15");
    else if(p==16) outtextxy(680,500,"16");
    else if(p==17) outtextxy(680,500,"17");
    else if(p==18) outtextxy(680,500,"18");
    else if(p==19) outtextxy(680,500,"19");
    else if(p==20) outtextxy(680,500,"20");
    else if(p==21) outtextxy(680,500,"21");
    else if(p==22) outtextxy(680,500,"22");
    else if(p==23) outtextxy(680,500,"23");
    else if(p==24) outtextxy(680,500,"24");
    else if(p==25) outtextxy(680,500,"25");
    else if(p==26) outtextxy(680,500,"26");
    else if(p==27) outtextxy(680,500,"27");
    else if(p==28) outtextxy(680,500,"28");

    outtextxy(720,500," out of ");

    if(N==10) outtextxy(820,500,"10");
    else if(N==11) outtextxy(820,500,"11");
    else if(N==12) outtextxy(820,500,"12");
    else if(N==13) outtextxy(820,500,"13");
    else if(N==14) outtextxy(820,500,"14");
    else if(N==15) outtextxy(820,500,"15");
    else if(N==16) outtextxy(820,500,"16");
    else if(N==17) outtextxy(820,500,"17");
    else if(N==18) outtextxy(820,500,"18");
    else if(N==19) outtextxy(820,500,"19");
    else if(N==20) outtextxy(820,500,"20");
    else if(N==21) outtextxy(820,500,"21");
    else if(N==22) outtextxy(820,500,"22");
    else if(N==23) outtextxy(820,500,"23");
    else if(N==24) outtextxy(820,500,"24");
    else if(N==25) outtextxy(820,500,"25");
    else if(N==26) outtextxy(820,500,"26");
    else if(N==27) outtextxy(820,500,"27");
    else if(N==28) outtextxy(820,500,"28");


    setcolor(5);
    outtextxy(960,650,"Be Ready For Next Stage....");
    delay(7000);
}
