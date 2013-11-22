#include<stdio.h>
#include<graphics.h>

int stages(int z,int dlay)
{
    srand ( (unsigned)time ( NULL ) );
    int i,p,q,x,y,count=0,mx[50],my[50],u=0,cx[50],cy[50];

    int j=0,l=0,t=1;

    for(i=0;i<50;i++)
    {
        mx[i]=0;
        my[i]=0;
        cx[i]=0;
        cy[i]=0;
    }

    for(i=0;i<10;i++)
    {

        cleardevice();

        /*First attempt making a gun with a bar
        bar(600,600,650,800);
        bar(600,700,620,800);
        bar(630,700,650,800);*/

        settextstyle(3,4,2);
        setcolor(3);
        outtextxy(1200, 750, "SHOOT (CLICK) AS MANY AS YOU CAN...");

        //Making bar as a gun
        setfillstyle(1,WHITE);
        setcolor(4);
        line(679,800,679,700);
        line(665,800,665,700);
        line(649,800,649,700);
        line(635,800,635,700);
        circle(672,700,7);
        circle(642,700,7);
        bar(641,760,673,745);

        //Making target centre of the circle
        x=(rand()%1000+100);
        y=(rand()%500+100);

        cx[j]=x;
        cy[j++]=y;

        for(l=z,t=6;l>=0;l=l-5)
        {
            setcolor(t++);
            if(t>8) t=3;
            circle(x,y,l);
        }

        //mouse pointer co-ordinates
        p=mousex();
        q=mousey();

        mx[u]=p;
        my[u++]=q;

        //Defining delay time of the circles
        delay(dlay);
    }

    p=mousex();
    q=mousey();

    mx[u]=p;
    my[u++]=q;


    for(i=0,j=1;i<10;i++,j++)
    {
        if((mx[j]<=(cx[i]+z) && mx[j]>=(cx[i]-z))&&(my[j]<=(cy[i]+z) && my[j]>=(cy[i]-z)))
        count++;
    }

    //printf("%d\n",count);

    return count;

}
