#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
void border(char);
void spotlight(int);
void countdown(int);
void ned(int);

	   //Project by Adil Aslam
	   //FCIT 2015-16 NED,UET

int main()
{
  /*-x-x-x-x-x-x-x-x-x-x-x-Start of Graphics Mode-x-x-x-x-x-x-x-x-x-x-x-x-*/

int gd=DETECT,gm,i=180,j=236,d=800,r=40,k,x,y,z ;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
char c1,c2,c3,c4,d1,d2,d3,d4;

   //counting:1st//

   countdown(d);

   cleardevice();


   setbkcolor(BLACK);
   settextstyle(2,0,15);
   outtextxy(180,0,"LOADING ........");

   for(k=0;k<=440;k+=60)
  {   bar(0,k,40,k+40);   bar(640,k,600,k+40);
   delay(200);            delay(200);

 }

   setcolor(BLUE);
   settextstyle(1,0,5);
   outtextxy(305,170,"CINEMA");
   outtextxy(305,230,"TICKETING");
   outtextxy(305,290,"SYSTEM");
   setfillstyle(SOLID_FILL,RED);
   fillellipse(220,240,65,65);  //maincircle
   setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillellipse(220,240,5,5);  //centrecircle
    fillellipse(205,274,15,15); //all the circles
    fillellipse(253,260,15,15);
    fillellipse(255,215,15,15);
    fillellipse(208,203,15,15);
    fillellipse(180,236,15,15);





    fillellipse(180,236,15,15);
    if( i==180 && j==236)
    { setfillstyle(SOLID_FILL,BLACK);
    fillellipse(180,236,10,10);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(180,236,5,5);
    delay(500);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillellipse(i,j,15,15);             }


   fillellipse(i+=25,j+=38,15,15);
   if( i==205 && j==274)
    { setfillstyle(SOLID_FILL,BLACK);
    fillellipse(i,j,10,10);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(i,j,5,5);
    delay(500);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillellipse(i,j,15,15);     }


    fillellipse(i+=48,j-=14,15,15);
    if( i==253 && j==260)
    { setfillstyle(SOLID_FILL,BLACK);
    fillellipse(i,j,10,10);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(i,j,5,5);
    delay(500);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillellipse(i,j,15,15);     }


   fillellipse(i+=2,j-=45,15,15);
    if( i==255 && j==215)
    { setfillstyle(SOLID_FILL,BLACK);
    fillellipse(i,j,10,10);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(i,j,5,5);
    delay(500);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillellipse(i,j,15,15);      }


    fillellipse(i-=47,j-=12,15,15);
    if( i==208 && j==203)
    { setfillstyle(SOLID_FILL,BLACK);
    fillellipse(i,j,10,10);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(i,j,5,5);
    delay(500);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillellipse(i,j,15,15);
    }

     fillellipse(i-=28,j+=33,15,15);
    if( i==180 && j==236)
    { setfillstyle(SOLID_FILL,BLACK);
    fillellipse(i,j,10,10);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(i,j,5,5);
    delay(500);
   }
   cleardevice();

   //ned name :)
   ned(r);
   delay(400);
   cleardevice();

   //titlepage:2nd//
   setbkcolor(BLUE);
   settextstyle(3,0,5);
   setcolor(YELLOW);
   outtextxy(60,50,"CINEMA TICKETING SYSTEM");
   delay(1000);
   cleardevice();
   int l=440;
   for(x=0;x<=220;x+=20)     //writing projectby
 {
   setbkcolor(BLUE);
   settextstyle(3,0,5);
   setcolor(YELLOW);
   outtextxy(60,50,"CINEMA TICKETING SYSTEM");

   settextstyle(3,0,4);
   setcolor(6);
   outtextxy(x,120,"Project");
   outtextxy(l,120,"By");

   delay(150);

   if(x!=220)
   cleardevice();
   l-=9;
   }
   delay(600);                //names//
   setcolor(WHITE);
   outtextxy(210,180,"Adil Aslam");
   delay(800);
   outtextxy(180,230,"Karim Noor Ali");
   delay(800);
   outtextxy(185,280,"Surman Ahuja");
   delay(800);

   setcolor(RED);
   outtextxy(185,340,"Submitted To");
   delay(800);
   setcolor(GREEN);
   outtextxy(185,380,"Sir Wasimullah");
   delay(800);
   outtextxy(185,410,"Miss Nazish Irfan");
   delay(1200);
   cleardevice();

//loginpage//
login:
setbkcolor(3);
setcolor(YELLOW);
settextstyle(1,0,5);
outtextxy(205,60,"USER");
setcolor(8);
outtextxy(310,60,"LOGIN");

setfillstyle(1,8);
bar(275,190,345,210);

bar(305,150,315,210);

setfillstyle(1,8);
fillellipse(310,158,15,30);

bar(190,250,430,280);

bar(190,300,430,330);

setfillstyle(1,YELLOW);
bar(200,370,420,410);
setcolor(WHITE);
settextstyle(3,0,4);
outtextxy(270,370,"LOGIN");

delay(600);
setcolor(8);

rectangle(185,245,435,285);
setcolor(YELLOW);
settextstyle(1,0,1);
outtextxy(80,250,"Username");


gotoxy(26,17);
c1=getch();
printf("%c  ",c1);
c2=getch();
printf("%c  ",c2);
c3=getch();
printf("%c  ",c3);
c4=getch();
printf("%c",c4);

getch();
setcolor(8);
rectangle(185,295,435,335);
setcolor(YELLOW);
outtextxy(80,300,"Password");

gotoxy(26,20);
d1=getch();
printf("*  ");
d2=getch();
printf("*  ");
d3=getch();
printf("*  ");
d4=getch();
printf("*");

if(c1=='f'&&c2=='c'&&c3=='i'&&c4=='t'&&d1=='1'&&d2=='9'&&d3=='9'&&d4=='6')
{
delay(600);
setfillstyle(1,YELLOW);
bar(200,370,420,410);
setcolor(RED);
settextstyle(3,0,3);
outtextxy(215,372,"ACCESS GRANTED!");
delay(1000);
}
else
{
delay(600);
setfillstyle(1,YELLOW);
bar(200,370,420,410);
setcolor(RED);
settextstyle(3,0,3);
outtextxy(215,370,"ACCESS DEINIED!");
delay(1000);
goto login;
}
cleardevice();


		  //colorlightening//
int light=5;
spotlight(light);



cleardevice();
//Smile Face: 1//
setbkcolor(WHITE);

setfillstyle(1,YELLOW);       //bigcircle//
fillellipse(320,240,200,200);

setfillstyle(1,WHITE);      //eyes//
fillellipse(220,190,30,30);
fillellipse(420,190,30,30);

setfillstyle(1,7);	  //eyeballs
fillellipse(220,190,10,10);
fillellipse(420,190,10,10);

setfillstyle(1,RED);         //nose//
fillellipse(320,250,30,50);

setfillstyle(1,WHITE);   //mouth//
bar(220,350,420,355);
delay(800);
cleardevice();

//Smile face: 2//
setbkcolor(WHITE);
setcolor(RED);
settextstyle(3,0,5);
outtextxy(50,400,"Loading...");

setfillstyle(1,YELLOW);       //bigcircle//
fillellipse(320,240,200,200);

setfillstyle(1,WHITE);      //eyes//
fillellipse(220,190,30,30);
fillellipse(420,190,30,30);

setfillstyle(1,7);	  //eyeballs
fillellipse(220,190,10,10);
fillellipse(420,190,10,10);

setfillstyle(1,RED);         //nose//
fillellipse(320,250,30,50);
setcolor(BLACK);
for(y=120;y<=130;y++)   //mouth//
{
 arc(320,270,210,330,y);
 delay(400); }
cleardevice();

//Smile face: 3//
setbkcolor(WHITE);
setcolor(RED);

setfillstyle(1,YELLOW);       //bigcircle//
fillellipse(320,240,200,200);

setfillstyle(1,WHITE);      //eyes//
fillellipse(220,190,30,30);
fillellipse(420,190,30,30);

setfillstyle(1,7);	  //eyeballs
fillellipse(220,190,10,10);
fillellipse(420,190,10,10);

setfillstyle(1,RED);         //nose//
fillellipse(320,250,30,50);
setcolor(BLACK);
for(z=120;z<=130;z++)   //mouth//
{
 arc(320,270,210,330,z); }
 setcolor(BLUE);
 settextstyle(3,0,4);
 outtextxy(100,420,"Press any key to continue...");
 getch();
 cleardevice();
  closegraph();


/*-x-x-x-x-x-x-x-x-x-x-x-Start of TEXT Mode-x-x-x-x-x-x-x-x-x-x-x-x-*/

char a='@',select,dex,ch1;
char del_name[20],check_name[20];
FILE *fp,*ft;
struct movie
{ char name[20];
  int age;
  char type[10];
  int numt;
} m;
fp=fopen("MOVIE.DAT","ab+");
pass:
clrscr();

border(a);

printf("\n\n\n\n\n  @\t\t  -x-x-x-x-x-CINEMA SHOW SCHEDULE-x-x-x-x-x-\n\n\n");  delay(150);
printf("  @\t\t\t     1-17th April, 2016\n\n"); delay(150);
printf("  @\t\t\t     2-18th April, 2016\n\n"); delay(150);
printf("  @\t\t\t     3-19th April, 2016\n\n\n"); delay(150);
printf("  @\t\t\t     4-Booking List\n\n"); delay(150);
printf("  @\t\t\t     5-Modify Booking\n\n"); delay(150);
printf("  @\t\t\t     6-Cacel Ticket\n\n"); delay(150);
printf("  @\t\t\t     0-EXIT \n\n");
ch1=getch();

//switch ----> 1

switch(ch1)
{

//case ---> 1

case '1':

clrscr();
printf("\n\n\t    x-x-x-x-x-x-x-CINEMA TICKETING SYSTEM-x-x-x-x-x-x-x");
printf("\n\n\n\n\n             \tChoose any movie: ");
printf("\n\n\n\n\n\t\t\t1- Theory Of Everything.");
printf("\n\t\t\t2- Pursuit Of Happyness.");
printf("\n\t\t\t3- Big Hero 6.");
printf("\n\t\t\t4- 12 Years a Slave.");
printf("\n\t\t\t5- FAN.");
printf("\n\t\t\t6- EXIT.\n\n\n\n");
select=getch();
switch(select)
{
case '1':               //case 1 (1)
clrscr();
printf("\n\n\tTHEORY OF EVERYTHING\n");
printf("\tRelease Date: September 2014\n");
printf("\tDirected By: James Marsh\n");
printf("\tCast: Eddie Redmayne\n");
fseek(fp,0,SEEK_END);
do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '2':               //case 1(2)
clrscr();
printf("\n\n\tPURSUIT OF HAPPYNESS\n");
printf("\tRelease Date: December 2006\n");
printf("\tDirected By: Gabriele Muccino\n");
printf("\tCast: Will Smith\n");
fseek(fp,0,SEEK_END);

do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '3':                     //case 1(3)
clrscr();
printf("\n\n\tBIG HERO 6\n");
printf("\tRelease Date: January 2015\n");
printf("\tDirected By: Don Hall\n");
printf("\tCast: Dan Gersan\n");
fseek(fp,0,SEEK_END);

do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '4':                    //case 1(4)
clrscr();
printf("\n\n\t12 YEAR A SLAVE\n");
printf("\tRelease Date: February 2014\n");
printf("\tDirected By: Steve McQueen\n");
printf("\tCast: Lupita Nyongo, Chiwetal Ejiofor\n");
fseek(fp,0,SEEK_END);

do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '5':                      //case 1(5)
clrscr();
printf("\n\n\n\n\tFAN\n");
printf("\tDate: April 2016\n");
printf("\tDirected By: Maneesh Sharma\n");
printf("\tCast: Shahrukh Khan\n");

do
{
fseek(fp,0,SEEK_END);
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("Age: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '6':
goto pass;

}

// case ----> 2

case '2':
clrscr();
printf("\n\n\t    x-x-x-x-x-x-x-CINEMA TICKETING SYSTEM-x-x-x-x-x-x-x");
printf("\n\n\n\n\n             \tChoose any movie: ");
printf("\n\n\n\n\n\t\t\t1- A Beautiful Mind.");
printf("\n\t\t\t2- Harry Potter.");
printf("\n\t\t\t3- Scary Movie.");
printf("\n\t\t\t4- Rango.");
printf("\n\t\t\t5- Happy New Year.");
printf("\n\t\t\t6- EXIT.\n\n\n\n");
select=getch();
switch(select)
{
case '1':               //case 2(1)
clrscr();
printf("\n\n\tA BEAUTIFUL MIND\n");
printf("\tRelease Date: September 2014\n");
printf("\tDirected By: James Marsh\n");
printf("\tCast: Eddie Redmayne\n");
fseek(fp,0,SEEK_END);

do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '2':      //case 2(2)
clrscr();
printf("\n\n\tHARRY POTTER\n");
printf("\tRelease Date: December 2006\n");
printf("\tDirected By: Gabriele Muccino\n");
printf("\tCast: Will Smith\n");
fseek(fp,0,SEEK_END);
do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '3':      //case 2(3)
clrscr();
printf("\n\n\tSCARY MOVIE\n");
printf("\tRelease Date: January 2015\n");
printf("\tDirected By: Don Hall\n");
printf("\tCast: Dan Gersan\n");
fseek(fp,0,SEEK_END);

do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '4':               //case 2(4)
clrscr();
printf("\n\n\tRANGO\n");
printf("\tRelease Date: February 2014\n");
printf("\tDirected By: Steve McQueen\n");
printf("\tCast: Lupita Nyongo, Chiwetal Ejiofor\n");
fseek(fp,0,SEEK_END);

do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '5':     //case 2(5)
clrscr();
printf("\n\n\n\n\tHAPPY NEW YEAR\n");
printf("\tDate: April 2016\n");
printf("\tDirected By: Maneesh Sharma\n");
printf("\tCast: Shahrukh Khan\n");
fseek(fp,0,SEEK_END);
do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("Age: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;
case '6':
goto pass;
}

// case ----> 3

case '3':
clrscr();
printf("\n\n\t    x-x-x-x-x-x-x-CINEMA TICKETING SYSTEM-x-x-x-x-x-x-x");
printf("\n\n\n\n\n             \tChoose any movie: ");
printf("\n\n\n\n\n\t\t\t1- Theory Of Everything.");
printf("\n\t\t\t2- Pursuit Of Happyness.");
printf("\n\t\t\t3- King Kong.");
printf("\n\t\t\t4- Around the world in 80 days.");
printf("\n\t\t\t5- Om Shanti Om.");
printf("\n\t\t\t6- EXIT.\n\n\n\n");
select=getch();
switch(select)
{
case '1':    //case 3(1)
clrscr();
printf("\n\n\tTHEORY OF EVERYTHING\n");
printf("\tRelease Date: September 2014\n");
printf("\tDirected By: James Marsh\n");
printf("\tCast: Eddie Redmayne\n");
fseek(fp,0,SEEK_END);
do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '2':       //case 3(2)
clrscr();
printf("\n\n\tPURSUIT OF HAPPYNESS\n");
printf("\tRelease Date: December 2006\n");
printf("\tDirected By: Gabriele Muccino\n");
printf("\tCast: Will Smith\n");
fseek(fp,0,SEEK_END);
do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '3':            //case 3(3)
clrscr();
printf("\n\n\tKING KONG\n");
printf("\tRelease Date: January 2015\n");
printf("\tDirected By: Don Hall\n");
printf("\tCast: Gorilla\n");
fseek(fp,0,SEEK_END);
do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '4':             //case 3(4)
clrscr();
printf("\n\n\tAROUND THE WORLD IN 80 DAYS\n");
printf("\tRelease Date: February 2014\n");
printf("\tDirected By: J.K ROLLING\n");
printf("\tCast: Lupita Nyongo, Chiwetal Ejiofor\n");
fseek(fp,0,SEEK_END);

do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '5':            //case 3(5)
clrscr();
printf("\n\n\n\n\tOM SHANTI OM");
printf("\tDate: April 2016\n");
printf("\tDirected By: Maneesh Sharma\n");
printf("\tCast: Shahrukh Khan\n");
fseek(fp,0,SEEK_END);

do
{
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
printf("\nDo you want to buy another ticket? {y/n}");
fflush(stdin);
dex=getch();
}
while(dex=='y');
goto pass;

case '6':
goto pass;
}

case '4':
clrscr();
rewind(fp);
printf("\n\n\t\t-x-x-x-x-x-Ticket Registration List-x-x-x-x-x-\n");
while(fread(&m,sizeof(m),1,fp)==1)
{printf("\n\t\tName: %s\n\t\tType: %s\n\t\tTicket number: %d\n\t\tAge: %d\nPress any key to see next -->",m.name,m.type,m.numt,m.age);
printf("\t\t\n=================================");
getch();
}
goto pass;

case '5':
clrscr();
printf("\n\n\t\t-x-x-x-x-x-Search and Modify Ticket-x-x-x-x-x-\n");
char another='y';
while(another=='y')
{
printf("\n\n\tEnter name to search and modify: ");
scanf("%s",del_name);

rewind(fp);
while(fread(&m,sizeof(m),1,fp)==1)
{
  if(strcmp(m.name,del_name)==0)
  {
printf("\nEnter new details: ");
printf("\n\n\n\tName: ");
scanf("%s",m.name);
printf("\tType: ");
scanf("%s",m.type);
printf("\tNumber of tickets: ");
scanf("%d",&m.numt);
printf("\tAge: ");
scanf("%d",&m.age);
fwrite(&m,sizeof(m),1,fp);
fseek(fp,-sizeof(m),SEEK_CUR);
fwrite(&m,sizeof(m),1,fp);
break;
}
else
printf("\nYou are not registered.");
}

printf("\nDo you want to modify another ticket? {y/n}");
fflush(stdin);
another=getch();
}
goto pass;


case '6':
clrscr();
		   another = 'y';
		   char del_name[20];
		   int flag=0;

		   while(another=='y')
		   {      flag=0;

printf("\n\n\t\t-x-x-x-x-x-Cancel Ticket-x-x-x-x-x-");
printf("\n\n\n\t    Enter the name of ticket to be cancelled: ");
scanf("%s", &del_name);

ft=fopen("MOVIE2.DAT","ab+");
rewind(fp);

while(fread(&m,sizeof(m),1,fp)==1)
{
if(strcmp(m.name,del_name) == 0)
flag=1;

else if(strcmp(m.name,del_name) != 0)
{

fwrite(&m,sizeof(m),1,ft);
flag=0;

}
}

if(flag==1)
{

printf("\n\n\n\t   Your registration has been cancelled");
}

else
{
printf("\n\n\n\t   You are not registered");
}

fclose(fp);
fclose(ft);


remove("MOVIE.DAT");
rename("MOVIE2.DAT","MOVIE.DAT");

fp=fopen("MOVIE.DAT","ab+");

printf("\n\n\n\n\t\t   Do you want to cancel another ticket? (Y/N)");

fflush(stdin);
another=getche();

clrscr();
}
goto pass;

case '0':
fclose(fp);

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

setbkcolor(WHITE);
setcolor(RED);
settextstyle(0,0,12);
outtextxy(70,100,"THANK");
outtextxy(160,250,"YOU");
delay(1200);


}
}

/*-x-x-x-x-x-x-x-x-x-x-x-FUNCTIONS-x-x-x-x-x-x-x-x-x-x-x-x*/

void spotlight(int light)
{
for(int l1=1;l1<=light;l1++)
{
setbkcolor(MAGENTA);
delay(100);
setbkcolor(BLUE);
delay(100);
setbkcolor(WHITE);
delay(100);
setbkcolor(GREEN);
delay(100);
setbkcolor(CYAN);
delay(100);
setbkcolor(RED);
delay(100);
setbkcolor(YELLOW);
delay(100);
}
}


void border(char x)
{
for(int i=1;i<=25;i++)         //border loops
{
gotoxy(3,i);
printf("%c",x);
delay(30);
 }

for(i=1;i<=76;i++)
{
gotoxy(i,30);
printf("%c",x);
delay(15);
 }

for(i=25;i>=1;i--)
{
gotoxy(79,i);
printf("%c",x);
delay(30);
 }

for(i=78;i>=3;i--)
{
gotoxy(i,1);
printf("%c",x);
delay(15);
}


}

 void countdown(int d)
 {
   setcolor(RED);
   settextstyle(1,0,40);
   outtextxy(260,170,"3");
   delay(d);
   cleardevice();
   settextstyle(1,0,15);
   outtextxy(260,170,"2");
   delay(d);
   cleardevice();
   settextstyle(1,0,15);
   outtextxy(260,170,"1");
   delay(d);

   }





 void ned(int r)
 {

for(int c=0;c<=300;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,c,25,25);
delay(r);
}
for(c=0;c<=250;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,c,25,25);
delay(r);
}
for(c=0;c<=200;c+=25)
{
cleardevice();
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,c,25,25);
delay(r);
}
for(c=0;c<=230;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,c,25,25);
delay(r);
}

for(c=0;c<=270;c+=25)
{
cleardevice();
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,c,25,25);
delay(r);
}

for(c=0;c<=300;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,c,25,25);
delay(r);
}
for(c=0;c<=250;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,c,25,25);
delay(r);
}
for(c=0;c<=200;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,c,25,25);
delay(r);
}

//=x=x=E=x=x=//

for(c=0;c<=325;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,c,25,25);
delay(r);
}

for(c=0;c<=275;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,c,25,25);
delay(r);
}
for(c=0;c<=225;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,c,25,25);

delay(r);
}

for(c=0;c<=175;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,c,25,25);

delay(r);
}

for(c=0;c<=325;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,c,25,25);
delay(r);
}
for(c=0;c<=250;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,325,25,25);
setfillstyle(1,GREEN);
fillellipse(350,c,25,25);
delay(r);
}

for(c=0;c<=175;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,325,25,25);
setfillstyle(1,GREEN);
fillellipse(350,250,25,25);
setfillstyle(1,YELLOW);
fillellipse(350,c,25,25);
delay(r);
}

//=x=x=D=x=x=//

for(c=0;c<=300;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,325,25,25);
setfillstyle(1,GREEN);
fillellipse(350,250,25,25);
setfillstyle(1,YELLOW);
fillellipse(350,175,25,25);
setfillstyle(1,RED);
fillellipse(430,c,25,25);
delay(r);
}

for(c=0;c<=250;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,325,25,25);
setfillstyle(1,GREEN);
fillellipse(350,250,25,25);
setfillstyle(1,YELLOW);
fillellipse(350,175,25,25);
setfillstyle(1,RED);
fillellipse(430,300,25,25);
setfillstyle(1,BLUE);
fillellipse(430,c,25,25);
delay(r);
}

for(c=0;c<=200;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,325,25,25);
setfillstyle(1,GREEN);
fillellipse(350,250,25,25);
setfillstyle(1,YELLOW);
fillellipse(350,175,25,25);
setfillstyle(1,RED);
fillellipse(430,300,25,25);
setfillstyle(1,BLUE);
fillellipse(430,250,25,25);
setfillstyle(1,CYAN);
fillellipse(430,c,25,25);
delay(r);
}

for(c=0;c<=300;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,325,25,25);
setfillstyle(1,GREEN);
fillellipse(350,250,25,25);
setfillstyle(1,YELLOW);
fillellipse(350,175,25,25);
setfillstyle(1,RED);
fillellipse(430,300,25,25);
setfillstyle(1,BLUE);
fillellipse(430,250,25,25);
setfillstyle(1,CYAN);
fillellipse(430,200,25,25);
setfillstyle(1,GREEN);
fillellipse(480,c,25,25);
delay(r);
}

for(c=0;c<=200;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,325,25,25);
setfillstyle(1,GREEN);
fillellipse(350,250,25,25);
setfillstyle(1,YELLOW);
fillellipse(350,175,25,25);
setfillstyle(1,RED);
fillellipse(430,300,25,25);
setfillstyle(1,BLUE);
fillellipse(430,250,25,25);
setfillstyle(1,CYAN);
fillellipse(430,200,25,25);
setfillstyle(1,GREEN);
fillellipse(480,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(480,c,25,25);
delay(r);
}

for(c=0;c<=250;c+=25)
{
cleardevice();
setbkcolor(WHITE);
setfillstyle(1,YELLOW);
fillellipse(80,300,25,25);
setfillstyle(1,GREEN);
fillellipse(80,250,25,25);
setfillstyle(1,BLUE);
fillellipse(80,200,25,25);
setfillstyle(1,CYAN);
fillellipse(130,230,25,25);
setfillstyle(1,MAGENTA);
fillellipse(170,270,25,25);
setfillstyle(1,RED);
fillellipse(215,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(215,250,25,25);
setfillstyle(1,BLUE);
fillellipse(215,200,25,25);
setfillstyle(1,GREEN);
fillellipse(300,325,25,25);
setfillstyle(1,CYAN);
fillellipse(300,275,25,25);
setfillstyle(1,RED);
fillellipse(300,225,25,25);
setfillstyle(1,MAGENTA);
fillellipse(300,175,25,25);
setfillstyle(1,BLUE);
fillellipse(350,325,25,25);
setfillstyle(1,GREEN);
fillellipse(350,250,25,25);
setfillstyle(1,YELLOW);
fillellipse(350,175,25,25);
setfillstyle(1,RED);
fillellipse(430,300,25,25);
setfillstyle(1,BLUE);
fillellipse(430,250,25,25);
setfillstyle(1,CYAN);
fillellipse(430,200,25,25);
setfillstyle(1,GREEN);
fillellipse(480,300,25,25);
setfillstyle(1,YELLOW);
fillellipse(480,200,25,25);
setfillstyle(1,MAGENTA);
fillellipse(520,c,25,25);
delay(r);
}
}
