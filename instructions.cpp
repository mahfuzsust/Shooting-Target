#include<graphics.h>

void instruction()
{
    char str[600];

    cleardevice();
    settextstyle(1,0,3);
    sprintf(str,"Instructions.....");
	outtextxy(220,100,str);

	settextstyle(1,0,2);
	//setbkcolor(4);
	sprintf(str,"You have to just click the circles in the screen.");
	outtextxy(220,200,str);
	//setbkcolor(13);
	sprintf(str,"Make sure you just click it before disappear.");
	outtextxy(300,280,str);
	sprintf(str,"Best is try to shoot in the center of the circle");
	outtextxy(340,320,str);
	//setbkcolor(1);
	sprintf(str,"You will get points for shooting the circles");
	outtextxy(300,400,str);
	sprintf(str,"Try to beat the previous high score");
	outtextxy(340,440,str);
	sprintf(str,"Have a nice try....");
	outtextxy(240,520,str);

	delay(10000);


}
