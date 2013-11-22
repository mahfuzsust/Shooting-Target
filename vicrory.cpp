
#include<graphics.h>
#include<windows.h>
#include<MMSystem.h>

void victory(void)
{

    //char *WAV="congrats.wav";
    //char *WAV2="victory.wav";


    int score, highscore;

    FILE *player_name_write;
    FILE *player_name_read;

    player_name_write=fopen("player_name.txt", "w");
    fclose(player_name_write);

    char t[2], name[20], c;
    //int j=-1;
    int i=500;

    //sndPlaySound(WAV2, SND_ASYNC);


    settextstyle(4,4,4);
    setcolor(4);
    outtextxy(900, 50, "Hurraah!! You just saved yourself");
    setcolor(2);
    outtextxy(900, 100, "You have won the game");
    outtextxy(400,300, "Enter your name: ");

    c=getch(); c=getch();

    while(c!=13)
    {

        c=getch();
        if(c>91) c=c-32;
        player_name_write=fopen("player_name.txt", "a");
        fprintf(player_name_write, "%c", c);
        fclose(player_name_write);

        t[0]=c;
        t[1]='\0';
        t[2]='\0';

        setcolor(2);
        settextstyle(4,0,4);
        setcolor(7);
        outtextxy(i,300, t);
        i=i+35;
    }


    cleardevice();

    char score_file[4];

    FILE *score_read;
    //FILE *highscore_read;
    FILE *highscore_write;

    score_read=fopen("score.txt", "r");
    fscanf(score_read, "%d", &score);
    fclose(score_read);

    //highscore_read=fopen("highscore.txt", "r");
    //fscanf(highscore_read, "%d", &highscore);
    //fclose(highscore_read);

  //  cout<<score<<endl<<highscore<<endl;

    if(score<highscore)
    {
        player_name_read=fopen("player_name.txt", "r");
        fscanf(player_name_read, "%s", name);
        fclose(player_name_read);
        setcolor(7);
        outtextxy(500, 100, "Waooo!! Well Played ,");
        setcolor(4);
        outtextxy(800, 100, name);
        setcolor(7);
        outtextxy(500, 200, "Your Score is,  ");
        setcolor(4);

        score_read=fopen("a.txt", "r");
        fscanf(score_read, "%s", score_file);
        fclose(score_read);
        outtextxy(800, 200, score_file);
    }
    else
    {
        //sndPlaySound(WAV, SND_ASYNC);

        player_name_read=fopen("player_name.txt", "r");
        fscanf(player_name_read, "%s", name);
        fclose(player_name_read);
        setcolor(7);
        outtextxy(600, 100, "Congratulation!!!");
        setcolor(4);
        outtextxy(800, 100, name);
        setcolor(7);
        outtextxy(800, 200, "You have done highest score: ");
        setcolor(4);

        //score_read=fopen("score.txt", "r");
        //fscanf(score_read, "%s", score_file);
        //fclose(score_read);
        //outtextxy(900, 200, score_file);


        highscore_write=fopen("a", "w");
        fprintf(highscore_write, "%d", score);
        fclose(highscore_write);
    }

    delay(10000);
    player_name_write=fopen("player_name.txt", "w");
    fclose(player_name_write);
    return;
}
