#include<stdio.h>
#include<graphics.h>

void credits()
{
	cleardevice();
	char str[600];
	//setbkcolor(1);
	settextstyle(1,0,3);
	//setcolor(4);
	sprintf(str,"Shahjalal University Of Science & Technology");
	outtextxy(320,85,str);
	settextstyle(0,0,3);
	setbkcolor(4);
	sprintf(str,"Project 100");
	outtextxy(550,200,str);
	setbkcolor(13);
	sprintf(str,"1. Md. Mahfuzur Rahman");
	outtextxy(400,300,str);
	sprintf(str,"Reg. No: 2008331060");
	outtextxy(480,340,str);
	setbkcolor(1);
	sprintf(str,"2. Salman M. Wahed");
	outtextxy(400,400,str);
	sprintf(str,"Reg. No: 2008331041");
	outtextxy(480,440,str);

	setbkcolor(0);
	delay(6000);
	//system("Pause");
}
