#include<stdio.h>
#include<graphics.h>

#define maxx 1360
#define maxy 700

void count_down(void);

int stages(int z,int dlay,int n,int uv)
{
    count_down();
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
    uv++;

    for(i=0;i<n;i++)
    {

        cleardevice();

        /*First attempt making a gun with a bar
        bar(600,600,650,800);
        bar(600,700,620,800);
        bar(630,700,650,800);*/

        settextstyle(3,4,2);
        setcolor(3);
        outtextxy(900, 650, "SHOOT (CLICK) AS MANY AS YOU CAN...");
        outtextxy(200, 650, "STAGE ");
        if(uv==1) outtextxy(280,650,"1");
        else if(uv==2) outtextxy(280,650,"2");
        else if(uv==3) outtextxy(280,650,"3");
        else if(uv==4) outtextxy(280,650,"4");
        else if(uv==5) outtextxy(280,650,"5");
        else if(uv==6) outtextxy(280,650,"6");
        else if(uv==7) outtextxy(280,650,"7");
        else if(uv==8) outtextxy(280,650,"8");
        else if(uv==9) outtextxy(280,650,"9");
        else if(uv==10) outtextxy(280,650,"10");

        //Making bar as a gun
        setfillstyle(1,WHITE);
        setcolor(4);
        line(679,800,679,600);
        line(665,800,665,600);
        line(649,800,649,600);
        line(635,800,635,600);
        circle(672,600,7);
        circle(642,600,7);
        bar(641,660,673,680);

        //Making target centre of the circle
        x=(rand()%(maxx-425)+100);
        y=(rand()%(maxy-300)+100);

        cx[j]=x;
        cy[j++]=y;

        for(l=z,t=6;l>=0;l=l-5)
        {
            setcolor(t++);
            if(t>8) t=3;
            circle(x,y,l);
        }

        setmousequeuestatus(1);

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

    //Checking the value where it falls
    for(i=0,j=1;i<n;i++,j++)
    {
        if((mx[j]<=(cx[i]+z) && mx[j]>=(cx[i]-z))&&(my[j]<=(cy[i]+z) && my[j]>=(cy[i]-z)))
        count++;
    }

    //printf("%d\n",count);

    return count;

}
