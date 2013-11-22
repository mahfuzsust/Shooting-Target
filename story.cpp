#include<stdio.h>
#include<graphics.h>

void story()
{
	cleardevice();
	char str[600];
	//setbkcolor(1);
	settextstyle(1,0,4);
	//setcolor(4);
	sprintf(str,"Shooters World");
	outtextxy(520,85,str);
	settextstyle(0,0,3);
	//setbkcolor(4);
	sprintf(str,"Your name is not Khan and You're not a terrorist");
	outtextxy(160,200,str);
	//setbkcolor(13);
	sprintf(str,"Ha, Ha, Ha, You are not a terrorist...");
	outtextxy(280,280,str);
	sprintf(str,"But everyone is searching for you.");
	outtextxy(320,320,str);
	//setbkcolor(1);
	sprintf(str,"You have a bounty of $100 Crore...");
	outtextxy(280,400,str);
	sprintf(str,"You are not attacking anyone.");
	outtextxy(320,440,str);
	sprintf(str,"Feel free to shoot to live in this world");
	outtextxy(200,500,str);
	sprintf(str,"Just leave them with no funeral");
	outtextxy(280,540,str);
	setbkcolor(1);
	sprintf(str,"SURVIVE");
	outtextxy(600,600,str);


	setbkcolor(0);
	delay(10000);
	//system("Pause");
}
