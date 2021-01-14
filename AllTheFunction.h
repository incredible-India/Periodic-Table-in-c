//declarations of all the functions
void gotoxy(int,int);
void mhLine(int,int,int,char);
void mvLine(int,int,int,char);
void setcolor(int);

//definition of the functions
void menu(void) //it show the menu
{


char urChoice;

SetConsoleTitle("MENU");

SYSTEMTIME t;

GetSystemTime(&t);

gotoxy(10,2);
setcolor(21);
printf("Date - %d/%d/%d",t.wDay,t.wMonth,t.wYear);

gotoxy(35,10);
setcolor(1);
printf("1 : SEARCH THE ELEMENT");

gotoxy(35,12);
setcolor(2);
printf("2 : SEE ALL THE ELEMENTS");

gotoxy(35,14);
setcolor(3);
printf("3 : HISTORY OF PERIODIC TABLE");

 againReadit:

urChoice =getch();

if(urChoice == '1')
{

}else if( urChoice == '2')
{


}else if( urChoice == '3')
{


}else
{
    printf("\a");
    goto againReadit;
}

}
