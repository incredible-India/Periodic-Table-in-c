//declarations of all the functions
void gotoxy(int,int);
void mhLine(int,int,int,char);
void mvLine(int,int,int,char);
void setcolor(int);
void _SeeHistory(char);//see the history using File Handling


//definition of the functions
void menu(void) //it show the menu
{


char urChoice;

SetConsoleTitle("MENU - Periodic Table");

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

gotoxy(35,16);
setcolor(6);
printf("4 : ABOUT OF PERIODIC TABLE");

gotoxy(35,18);
setcolor(4);
printf("5 : EXIT");


 againReadit:

  urChoice = getch();

if(urChoice == '1')
{

}else if( urChoice == '2')
{


}else if( urChoice == '3')
{

system("cls");

_SeeHistory('3');

}
else if( urChoice == '4')
{

system("cls");
_SeeHistory('4');

}else if( urChoice == '5')
{
    system("cls");
    gotoxy(40,12);
    printf("Thanx For Visiting Us");
    getch();
    exit(0);

}
else
{
    printf("\a");
    goto againReadit;
}

}

//see the history using File Handling
void _SeeHistory(char whichToBeShown)
{
    FILE *openData;

    char dataFromTxtFile;

    if(whichToBeShown == '3')
    {    SetConsoleTitle("History Of Periodic Table");
         openData =fopen("history.txt","r"); //open in read mode it returns null if file not found..
         gotoxy(25,2);
        setcolor(2);
        printf("History Of Periodic Table");
        mhLine(22,3,30,'-');
    }

  if(whichToBeShown == '4')
    {    SetConsoleTitle("About Periodic Table");
         openData =fopen("about.txt","r"); //open in read mode it returns null if file not found..
         gotoxy(25,2);
        setcolor(2);
        printf("About Periodic Table");
        mhLine(22,3,30,'-');
    }



    if(openData == NULL)
    {
        setcolor(3);
        gotoxy(40,12);
        printf(" ooppps !!! SomeThing Went Wrong ! Press Any Key To  Go Back");
        getch();
        system("cls");
        menu();

    }
    else{


        gotoxy(2,6);
        setcolor(3);
        while(!feof(openData))
        {
            dataFromTxtFile = fgetc(openData);
            printf("%c",dataFromTxtFile);

        }
        fclose(openData);
          getch();
        system("cls");
        menu();
    }



}
