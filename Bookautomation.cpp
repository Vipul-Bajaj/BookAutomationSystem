
//*******************************************************
// PROJECT BOOK-SHOP
//*******************************************************

//*******************************************************
//	INCLUDED HEADER FILES
//*******************************************************

#include"stdio.h"
#include"conio.h"
#include"fstream.h"
#include"stdlib.h"
#include"dos.h"
#include"string.h"
#include"graphics.h"
#include"iomanip.h"

//*******************************************************
//	CLASS NAME : BOOK
//*******************************************************

class book
{
public:
char name[20];
char author[20];
int a;
void getdata();
void show();
};

//*******************************************************
//	FUNCTIONS TO GET AND SHOW DATA
//*******************************************************

void book::getdata()
{
cout<<"\n\" \"ENTER DETAILS ABOUT BOOK U WANT TO PURCHASE\" :\"";
cout<<"\n\n\n\t\tEnter Name Of Book :\t";
cin>>name;
cout<<"\n\t\tEnter Name Of Author :\t";
cin>>author;
fflush(stdin);
cout<<"\n\t\tEnter No. Of Copies :\t";
cin>>a;
}
void book::show()
{

cout<<"BOOK :"<cout<<"\nAUTHOR :"<cout<<"\nCOPIES :"<}

void main()
{

fstream f;
f.open("book",ios::in|ios::out|ios::app|ios::ate|ios::binary);
clearviewport();
settextstyle(10,HORIZ_DIR,3);
setbkcolor(GREEN);
rectangle(10,10,630,470);
outtextxy(100,15,"WHAT DO U WANT TO DO:");
settextstyle(SANS_SERIF_FONT,0,3);
outtextxy(250,100,"1 . TO BUY");
outtextxy(250,150,"2 . TO SHOW ALL BOOKS");
outtextxy(250,350,"3 . TO EXIT");
int a;
settextstyle(7,0,5);
outtextxy(20,400, "ENTER UR CHOICE:");
f.seekg(0);
gotoxy(55,25);
cin>>a;
char x;
gotoxy(1,1);

switch (a)
{

//*******************************************************
//	CASE : 1
//	DETAILS : TO ADD A BOOK’S RECORD
//*******************************************************

case 1:
gotoxy(1,1);
clearviewport();
rectangle(10,10,630,470);
setbkcolor(RED);
textbackground(13);
textcolor(6);
clrscr();
fstream f;
f.open("book",ios::in|ios::out|ios::ate|ios::app|ios::binary);
char ans;
b1.getdata();
f.write((char *)&b1,sizeof(b1));
getch();
settextstyle(7,0,1);
outtextxy(250,410,"Do You Want To Continue:");

ans=getchar();
if(ans=='Y' || ans=='y')
goto z;
else
break;

//*******************************************************
//	CASE : 2
//	DETAILS : TO SHOW ALL BOOKS’ RECORDS
//*******************************************************

case 2:
{
clearviewport();
rectangle(10,10,630,470);
setbkcolor(LIGHTBLUE);
textbackground(3);
textcolor(6);
cout<<"\n\n";
fstream f;
f.open("book",ios::in|ios::out|ios::ate|ios::app|ios::binary);
char ans;
f.seekg(0);
int ctr=0;
while(f.read((char *)&b1,sizeof(b1)) )
{
ctr=ctr+1;
if(ctr==8)
{
getchar();
clrscr();
ctr=0;
}
b1.show();
if(f.eof()==1)
{
break;
}
}
f.close();
settextstyle(7,0,1);
outtextxy(250,410,"Do You Want To Continue:");
cin>>ans;
if(ans=='y'|| ans=='Y')
goto z;
else
{
closegraph();
exit(1);
}
}

//*******************************************************
//	CASE : 3
//	DETAILS : TO EXIT
//*******************************************************

case 6:
{
clearviewport();
rectangle(10,10,630,470);
setbkcolor(BROWN);
setcolor(BLUE);
settextstyle(8,0,4);
outtextxy(150,200,"NOW YOU WANT TO GO");
if(getch())
{
fflush(stdin);
clearviewport();
rectangle(10,10,630,470);
setbkcolor(LIGHTBLUE);
setcolor(RED);
window(10,10,40,11);
settextstyle(8,0,4);
outtextxy(150,200,"\"THANKS FOR VISITING\"");
getch();
closegraph();
exit(1); }
else
{
goto z;
} }
default:
goto z;
} } 

