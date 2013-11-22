#include <graphics.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#define maxx 1360
#define maxy 700


void story(void);
void complete_stage(int n,int p,int N);
void fail_stage(void);
int stages(int z,int dlay,int n,int uv);
void count_down(void);
int first_page(void);
void credits(void);
void instruction(void);
void high_score(void);
void obt_high(void);
void victory(void);


int main( )
{

    srand ( (unsigned)time ( NULL ) );

    initwindow(maxx, maxy, "The world of shooting . . .");

    int i,p,z=100,dlay=1300,a,n=10,N,sum;

    char *WAV = "meet_with_princess.wav";
    sndPlaySound(WAV, SND_ASYNC);

    story();
    cleardevice();
    a=0;

    a=first_page();

    if(a==1)
    {
        sum=0;
        for(i=0;i<10;i++)
        {
            p=stages(z,dlay,n,i);
            sum=sum+p;
            N=n;
            if(p>(int)N/2)
            {
                z=z-10;
                dlay=dlay-100;

                complete_stage(i+1,p,N);
                n=n+2;
            }
            else
            {
                fail_stage();
                break;
            }
        }

        freopen("a.txt","r",stdin);
        int xy;
        scanf("%d",&xy);
        if(xy<sum)
        {
            freopen("a.txt","w",stdout);
            printf("%d",sum);
            fclose(stdout);
            obt_high();
        }

        if(i==10) victory();

    }
    else if(a==2) instruction();
    else if(a==3) high_score();
    else if(a==4) credits();
    else if(a==5) return 0;



    cleardevice();
    system("PAUSE");
    return 0;
}
