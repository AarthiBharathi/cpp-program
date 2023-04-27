#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
 {
  int gd=DETECT,gm,midx,midy,i;
  initgraph(&gd,&gm,"C:\\turboc3\\bgi");
  midx=getmaxx()/2;
  midy=getmaxy()/2;
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(200,50,"TRAFFIC  SIGNAL");
  outtextxy (160,90,"REG NO:2113711058001");
  ellipse(midx-0,midx+0,0,180,60,180);
  line(260,320,380,320);
  rectangle(midx-15,320,midx+15,450);
   floodfill(midx-14,449,WHITE);
 circle(midx,170,12);
  circle(midx,240,12);
  circle(midx,303,12);
  while (!kbhit()){
 setfillstyle(SOLID_FILL,RED);  //red blink
 floodfill(midx,170,WHITE);setcolor(RED);
 outtextxy(195,160,"STOP");
 delay(1000);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,170,WHITE);
 setcolor(BLACK);
 outtextxy(195,160,"STOP");

 setfillstyle(SOLID_FILL,YELLOW);  //yellow blink
 floodfill(midx,240,WHITE);
 setcolor(YELLOW);
 outtextxy(400,230,"GET READY!!");
 delay(1000);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,240,WHITE);
 setcolor(BLACK);
 outtextxy(400,230,"GET READY!!");


  setfillstyle(SOLID_FILL,GREEN);   //green blink
 floodfill(midx,310,WHITE);
 setcolor(GREEN);
 outtextxy(140,285,"GOOO!!!");
 delay(1000);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,310,WHITE);
 setcolor(BLACK);
 outtextxy(140,285,"G000!!!");

  setcolor(LIGHTBLUE);
 outtextxy(90,370,"HAPPY DAY:-)");
 setcolor(LIGHTBLUE);
 outtextxy(400,370,"DRIVE SAFELY:-)");
 setcolor(WHITE);
 getch();
 closegraph();
 return 0;
 }
}