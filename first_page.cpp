#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include <mmsystem.h>

int first_page()
{
    cleardevice();
    //char *WAV = "meet_with_princess.wav";
    //sndPlaySound(WAV, SND_ASYNC);

    //PlaySound("meet_with_princess.wav",NULL,SND_FILENAME|SND_ASYNC);
    //PlaySound("meet_with_princess.wav",NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
    int i,x,y,p,q,j;
    //for(i=0;i<5;i++) x[i]=y[i]=0;
    for(i=0,j=40;i<=500;i+=10,j+=10)
    {
        bar(950,i,700,j);
        delay(1);
        cleardevice();
    }
    bar(950,500,700,540);
    for(i=0,j=40;i<=450;i+=10,j+=10)
    {
        bar(950,500,700,540);
        bar(950,i,700,j);
        delay(1);
        cleardevice();
    }
    bar(950,450,700,490);
    for(i=0,j=40;i<=400;i+=10,j+=10)
    {
        bar(950,500,700,540);
        bar(950,450,700,490);
        bar(950,i,700,j);
        delay(1);
        cleardevice();
    }
    bar(950,400,700,440);
    for(i=0,j=40;i<=350;i+=10,j+=10)
    {
        bar(950,450,700,490);
        bar(950,500,700,540);
        bar(950,400,700,440);
        bar(950,i,700,j);
        delay(1);
        cleardevice();
    }
    bar(950,350,700,390);
    for(i=0,j=40;i<=300;i+=10,j+=10)
    {
        bar(950,400,700,440);
        bar(950,450,700,490);
        bar(950,500,700,540);
        bar(950,350,700,390);
        bar(950,i,700,j);
        delay(1);
        cleardevice();
    }
    bar(950,300,700,340);
    bar(950,350,700,390);
    bar(950,400,700,440);
    bar(950,450,700,490);
    bar(950,500,700,540);

//
//    bar(950,350,700,390);
//    bar(950,400,700,440);
//    bar(950,450,700,490);
//    bar(950,500,700,540);

    settextstyle(3,4,2);
    outtextxy(770,308,"START GAME");

    settextstyle(3,4,2);
    outtextxy(763,358,"INSTRUCTIONS");

    settextstyle(3,4,2);
    outtextxy(772,408,"HIGH SCORE");

    settextstyle(3,4,2);
    outtextxy(787,458,"CREDITS");

    settextstyle(3,4,2);
    outtextxy(810,508,"EXIT");

    delay(3000);

    setmousequeuestatus(1);

        x=mousex();
        y=mousey();


        if((x>=700 && x<=950) && (y>=300 && y<=340)) return 1;
        else if((x>=700 && x<=950) && (y>=350 && y<=390)) return 2;
        else if((x>=700 && x<=950) && (y>=400 && y<=440)) return 3;
        else if((x>=700 && x<=950) && (y>=450 && y<=490)) return 4;
        else if((x>=700 && x<=950) && (y>=500 && y<=540)) return 5;

    return 1;

}
