#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>



int main()
{
   int gd = DETECT, gm;
   int x = 320, y = 240, radius;
int right= 0;
int left = 0;

srand(time(0));
for(int game = 2; game >= 1; game++)
{
    if (game!= 2)
    { //system("START dsd.exe");
    }
    closegraph();
    initgraph(&gd, &gm, "C:\\TC\\BGI");




setfillstyle(SOLID_FILL, BLACK);
floodfill(152, 182, WHITE);
floodfill(152, 182, BLACK);
printf(" right:%d\tleft:%d\n",right,left);


























float x = 320, y = 240, radius;
              //x640
              //y480
              int p1 = 240;
              int p2 = 240;
              int xmov = 1;
              float ymov;
              ymov = ((rand()%(4 - 1 + 1)) + 1);
              ymov = ymov/((rand()%(4 - 1 + 1)) + 1);
              if (ymov >= 3){
                ymov = ymov -2;
              }


              int direction = (rand()%(4 - 1 + 1)) + 1;
                if (direction == 1){
                    ymov = ymov * -1;
                    xmov = xmov * -1;
                }
                if (direction == 2){
                    xmov = xmov * -1;
                }
                if (direction == 3){
                    ymov = ymov * -1;
                }








              rectangle(1,1,639,479);
              //move ball
              for(int ball = 2;ball >= 1;)
              {
                  rectangle(20,p1-40,15,p1+40);
                  rectangle(620,p2-40,625,p2+40);
                  setcolor(BLACK);
                  circle(x, y, 5 );
                  x = x +xmov;
                  y = y + ymov;

                  /*int g = 1; //input
                    while( g <  2)
                    {
                        g=2;
                        if (_kbhit()) {
                            inputs = _getch();
                            break;}
                        printf("%d ",inputs);
                    }*/
                    //ai mode
                    if(xmov <= 0)
                    {
                        if( y > p1){
                        setcolor(BLACK);
                        rectangle(20,p1-40,15,p1+40);
                        p1 = p1 +1;

                        }
                        if( y < p1){
                        setcolor(BLACK);
                        rectangle(20,p1-40,15,p1+40);
                        p1 = p1 -1;
                        }
                    }
                    if(xmov >= 0)
                    {
                        if( y > p2){

                        setcolor(BLACK);
                        rectangle(620,p2-40,625,p2+40);
                        p2 = p2 +1;

                        }
                        if( y < p2){
                        setcolor(BLACK);
                        rectangle(620,p2-40,625,p2+40);
                        p2 = p2 -1;


                        }
                    }
                    setcolor(WHITE);
                    rectangle(20,p1-40,15,p1+40);
                    rectangle(620,p2-40,625,p2+40);

                    /*if (inputs == 80 ){
                        setcolor(BLACK);
                        rectangle(20,p1-40,15,p1+40);
                        p1 = p1 +5;

                    }
                    if (inputs == 72 ){

                        setcolor(BLACK);
                        rectangle(20,p1-40,15,p1+40);
                        p1 = p1 -5;

                    }
                    inputs = 0;
*/
                    setcolor(WHITE);
                    if (x <=  1 || x >=639){ //wall bounce
                            ball =-1;
                        if (x ==1){
                                left = left +1;
                        }
                        if (x ==639){
                                right = right +1;
                        }
                      rectangle(1,1,639,479);
                      xmov =(xmov* -1);

                      }
                  if (y <= 1 || y >=479){ //wall bounce
                      rectangle(1,1,639,479);
                      ymov =(ymov* -1);}


                    if(x == 20){
                        if (y <=( p1+40) && y >= (p1 - 40))
                            {
                                ymov = ((rand()%(4 - 1 + 1)) + 1);
                                ymov = ymov/((rand()%(4 - 1 + 1)) + 1);
                                if (ymov >= 3){
                                ymov = ymov -2;
                                }
                                if(1== 2%ball){
                                    ymov = ymov *-1;
                                }
                                xmov = xmov * -1;
                            }

                    }
                    if(x == 620){
                        if (y <=( p2+40) && y >= (p2 - 40))
                            {
                                ymov = ((rand()%(4 - 1 + 1)) + 1);
                                ymov = ymov/((rand()%(4 - 1 + 1)) + 1);
                                if (ymov >= 3){
                                ymov = ymov -2;
                                }
                                if(1== 2%ball){
                                    ymov = ymov *-1;
                                }
                                xmov = xmov * -1;
                            }
                    }







                circle(x, y, 5 );
                rectangle(20,p1-40,15,p1+40);
                rectangle(620,p2-40,625,p2+40);
                Sleep(4);


              }



          //line(1,1,y,x);

//rectangle(150,180,250,300);

	//rectangle(250,180,420,300);
	//rectangle(180,250,220,300);




	//line(200,100,250,180);
	//line(200,100,370,100);
	//line(370,100,420,180);
// Fill colours
	//setfillstyle(SOLID_FILL, BROWN);
//floodfill(152, 182, WHITE);
	//floodfill(252, 182, WHITE);
	//setfillstyle(SLASH_FILL, BLUE);
	//floodfill(182, 252, WHITE);
	//setfillstyle(HATCH_FILL, GREEN);
	//floodfill(200, 105, WHITE);
	//floodfill(210, 105, WHITE);
}

   getch();
   closegraph();

   exit;
}
