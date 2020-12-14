#include<bits/stdc++.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>
#include<iomanip.h>
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<dos.h>
using namespace std;
int a=300,b=100;
void nose()
{
	setcolor(RED);
circle(115+a,b+30,10);
circle(115+a,b+30,9);
circle(115+a,b+30,8);
circle(115+a,b+30,7);
circle(115+a,b+30,6);
circle(115+a,b+30,5);
circle(115+a,b+30,4);
circle(115+a,b+30,3);
circle(115+a,b+30,2);
  circle(115+a,b+30,1);
    circle(115+a,b+30,0);
 }
void beltball()

{

     setcolor(YELLOW);
  circle(115+a,117+b,7);         // ballbelt
  circle(115+a,117+b,6);         // ballbelt
  circle(115+a,117+b,5);         // ballbelt
  circle(115+a,117+b,4);         // ballbelt
  circle(115+a,117+b,3);         // ballbelt
  circle(115+a,117+b,2);// ballbelt
 circle(115+a,117+b,1);// ballbelt

  }

void belt()
{
	setcolor(RED);
		rectangle(160+a,110+b,65+a,115+b);   //belt
		rectangle(160+a,111+b,65+a,115+b);   //belt
		rectangle(160+a,112+b,65+a,115+b);   //belt
		rectangle(160+a,113+b,65+a,115+b);   //belt
		rectangle(160+a,114+b,65+a,115+b);   //belt
}
void eye()
	 {
	 setcolor(WHITE);
	 ellipse(100+a,b,0,360,15,25);   // eyes   right
	 ellipse(100+a,b,0,360,14,24);   // eyes   right
	 ellipse(100+a,b,0,360,13,23);   // eyes   right
	 ellipse(100+a,b,0,360,12,22);   // eyes   right
	 ellipse(100+a,b,0,360,11,21);   // eyes   right
	 ellipse(100+a,b,0,360,10,20);   // eyes   right
	 ellipse(100+a,b,0,360,9,19);   // eyes   right
	 ellipse(100+a,b,0,360,8,18);   // eyes   right
	 ellipse(100+a,b,0,360,7,17);   // eyes   right
	 ellipse(100+a,b,0,360,6,16);   // eyes   right
	 ellipse(100+a,b,0,360,5,15);   // eyes   right
	 ellipse(100+a,b,0,360,5,14);   // eyes   right
	 ellipse(100+a,b,0,360,5,13);   // eyes   righ
	 ellipse(100+a,b,0,360,5,12);   // eyes   right
	 ellipse(100+a,b,0,360,5,13);   // eyes   right
	 ellipse(100+a,b+10,0,360,5,15);   // eyes   right
	 ellipse(100+a,b+5,0,360,5,15);   // eyes   right
	 ellipse(100+a,b+5,0,360,5,16);   // eyes   right
	 ellipse(100+a,b+5,0,360,5,17);   // eyes   right
	 ellipse(100+a,b+5,0,360,4,18);   // eyes   right
	 ellipse(100+a,b+5,0,360,5,12);   // eyes   right
	 ellipse(100+a,b+5,0,360,5,13);   // eyes   right
	 ellipse(100+a,b+5,0,360,5,14);   // eyes   right
	 ellipse(100+a,b+5,0,360,5,10);   // eyes   right
	 ellipse(100+a,b+5,0,360,5,9);   // eyes   right
	 ellipse(100+a,b,0,360,15,25);   // eyes   right
	 circle(100+a,b+5,15); // small eye
	 circle(103+a,b+5,8); // small eye
	 circle(103+a,b+5,8); // small eye
	 circle(100+a,b+6,1);// inside small
	 circle(100+a,b+6,0);
	 ellipse(130+a,b,0,360,15,25);    // eye left
	 ellipse(130+a,b,0,360,14,25);    // eye left
	 ellipse(130+a,b,0,360,13,25);    // eye left
	 ellipse(130+a,b,0,360,12,25);    // eye left
	  ellipse(130+a,b,0,360,11,25);    // eye left
	 ellipse(130+a,b,0,360,10,25);    // eye left
	 ellipse(130+a,b,0,360,9,25);    // eye left
	 ellipse(130+a,b,0,360,8,25);    // eye left
	 ellipse(130+a,b,0,360,8,24);    // eye left
	 ellipse(130+a,b,0,360,8,23);    // eye left
	 ellipse(130+a,b,0,360,8,22);    // eye left
	 ellipse(130+a,b,0,360,8,15);    // eye left
	 ellipse(130+a,b,0,360,8,14);    // eye left
	 ellipse(130+a,b,0,360,8,21);    // eye left
	 ellipse(130+a,b,0,360,8,20);    // eye left
	 ellipse(130+a,b,0,360,8,19);    // eye left
	 ellipse(130+a,b,0,360,8,18);    // eye left
	 ellipse(130+a,b,0,360,8,17);    // eye left
	 ellipse(130+a,b,0,360,8,16);    // eye left
	 ellipse(130+a,b,0,360,8,13);    // eye left
	 ellipse(130+a,b+2,0,360,8,13);    // eye left
	 ellipse(130+a,b+3,0,360,8,13);    // eye left
	 ellipse(130+a,b+4,0,360,8,13);    // eye left
	 ellipse(130+a,b+5,0,360,8,13);    // eye left
	 ellipse(130+a,b+6,0,360,8,13);    // eye left
	  ellipse(130+a,b+7,0,360,8,13);    // eye left
	 ellipse(130+a,b+8,0,360,8,13);    // eye left
	 ellipse(130+a,b+8,0,360,8,13);    // eye left
	 ellipse(128+a,b+8,0,360,8,13);    // eye left
	 ellipse(129+a,b+8,0,360,8,13);    // eye left
	 ellipse(127+a,b+8,0,360,8,13);    // eye left
	 ellipse(132+a,b+9,0,360,8,13);    // eye left  after 2431
	 ellipse(133+a,b+10,0,360,8,13);    // eye left
	 ellipse(131+a,b+12,0,360,8,13);    // eye left
	 ellipse(130+a,b+12,0,360,8,13);    // eye left
	 ellipse(130+a,b+12,0,360,8,13);    // eye left
	 circle(131+a,b+7,0);       // iside small 0 1324
	 }
void insidemouth()
{
	  setcolor(RED);

	   ellipse(105+a,b+85,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+86,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+87,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+88,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+89,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+90,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+91,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+92,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+93,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+94,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+95,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+96,30,180,10,10);          // inside mouth left
	   ellipse(105+a,b+97,30,180,10,10);          // inside mouth left
		setcolor(BLACK);
	   circle(92+a,b+92,5);
	   circle(92+a,b+92,4);
	   circle(92+a,b+92,3);
	   circle(92+a,b+92,2);
	   circle(92+a,b+92,1);
	   circle(92+a,b+93,5);
	   circle(93+a,b+91,5);
	setcolor(RED);
	 ellipse(129+a,b+84,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+85,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+86,30,160,16,10);          // inside mouth right
	  ellipse(129+a,b+87,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+88,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+89,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+90,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+91,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+92,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+93,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+94,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+95,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+96,30,160,16,10);          // inside mouth right
	 ellipse(129+a,b+97,30,160,16,10);          // inside mouth right
	setcolor(BLACK);
	circle(114+a,b+97,5);
	circle(114+a,b+97,4);
	circle(114+a,b+97,3);
	circle(114+a,b+97,2);
	circle(114+a,b+97,1);
	circle(114+a,b+97,0);
	circle(140+a,b+88,4);
	circle(140+a,b+88,3);
	circle(140+a,b+88,2);
	circle(140+a,b+88,1);
	circle(140+a,b+88,0);
	circle(140+a,b+91,5);
	circle(140+a,b+91,4);
	circle(140+a,b+91,3);
	circle(140+a,b+91,2);
	circle(140+a,b+91,1);
	circle(140+a,b+91,0);
	circle(139+a,b+97,10);
	circle(139+a,b+97,9);
	circle(139+a,b+97,8);
	circle(139+a,b+97,7);
	circle(139+a,b+97,6);
	circle(139+a,b+97,5);
	circle(139+a,b+97,4);
		}
void must()
{               setcolor(RED);
		ellipse(147+a,b+52,280,90,22,15);        // right cheak
		ellipse(80+a,b+53,80,270,22,13);      //  left cheek
  }








void cheak()
{







	  setcolor(BLUE);
	ellipse(85+a,b+55,90,240,42,62);  // left big cheek
	ellipse(144+a,b+52,290,90,42,62);        // right big cheeek'
	}

void bigcheak()
{                setcolor(BLUE);
		ellipse(105+a,b+35,90,240,80,85);     // left final cheakki

	  }
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	eye();
	belt();
	beltball();
	nose();
	insidemouth();
	must();
	cheak();
	bigcheak();
	       setcolor(WHITE);
	        setcolor(RED);
	       //	settextstyle(101,0,100);
		 settextstyle(8,HORIZ_DIR,9);
		     outtextxy(100,50,"k ");
		     outtextxy(180,100,"s");
		     outtextxy(230,200,"l");

	       //	setcolor(WHITE);
	 line(115+a,b+41,115+a,60+b);      // nose long
	 setcolor(5);
	 ellipse(115+a,b+70,10,160,40,10);      // upper mouth
	 ellipse(115+a,b+70,180,0,32,20);          // lower mouth



						 setcolor(WHITE);
		   setcolor(BLUE);
	ellipse(105+a,b+35,90,240,80,85);     // left final cheakki

	ellipse(135+a,b+32,290,90,70,82);    // right final cheakeii//'/
       ellipse(120+a,b-50,0,180,20,1);     // am toopeee
         //************ errrrrrrrrrrrrooooooooorrrrrrr***********
					       // setcolor(BLACK);
setcolor(WHITE);       ellipse(110+a,120+b,180,0,50,70);    // big bout
			       line(80+a,140+b,140+a,140+b);         // bout line smaall
       ellipse(110+a,140+b,180,0,30,30);     // small bout
       setcolor(BLUE);
       ellipse(50+a,170+b,130,260,10,56);   // lesft hand leg
       ellipse(180+a,176+b, 300,70,10,54);    // rightf hanh leg
			  setcolor(WHITE);    line(50+a,225+b,100+a,225+b);      // line leg down left
			      line(125+a,225+b,185+a,225+b);   // line leg down right
setcolor(BLUE);       ellipse(113+a,224+b,0,180,12,18);  // up to lefiiifus
     setcolor(WHITE);  ellipse(50+a,236+b,80,270,20,10);   //left left toe
       ellipse(130+a,236+b,80,270,15,10);    // left toe of right lefg
       ellipse(90+a,234+b,270,80,20,10);     // right left toe
       ellipse(180+a,234+b,270,80,20,10);        // right to right toe
		       line(130+a,245+b,180+a,245+b);      // right toe
		       line(50+a,245+b,90+a,245+b);        // left leg
		        setcolor(WHITE);
			 circle(a-5,168+b,15);
				setfillstyle(1,WHITE);    floodfill(a-5,168+b,WHITE);
			 circle(230+a,167+b,15);
				setfillstyle(1,WHITE);    floodfill(230+a,167+b,WHITE);
			      // left hand handfingers
			 //-/////////*/-/*/*/* hand*-///*--/*/---------/*-/
    setcolor(BLUE);   line(60+a,110+b,40+a,115+b);   // lefti continu
       line(40+a,115+b,20+a,128+b);
       line(20+a,128+b,   a,145+b);
       line(a,   145+b,a-18,160+b);
       line(a,   182+b,20+a,168+b);
       line(20+a,168+b,40+a,160+b);
       // right hand
       line(160+a,110+b,180+a,112+b);
       line(180+a,112+b,200+a,120+b);
       line(200+a,120+b,220+a,135+b);
       line(220+a,135+b,240+a,155+b);
       line(220+a,179+b,200+a,165+b);
       line(200+a,165+b,190+a,160+b);
	 getch();
	 }
