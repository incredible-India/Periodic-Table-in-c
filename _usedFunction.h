
void gotoxy(int a,int b) //this function for the coordinate system ....
{

COORD c;

c.X=a;

c.Y=b;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);



}

void mhLine(int xCord,int yCord,int length,char ch)  //make a horizontal line
{
    extern int i;

    for(i= 0 ; i< length ; i++)
    {
        gotoxy(xCord,yCord);
        printf("%c",ch);

        xCord++;
    }
}

void mvLine(int xCord,int yCord,int length,char ch) //make a vertical line
{
    extern int i;

    for(i= 0 ; i< length ; i++)
    {
        gotoxy(xCord,yCord);
        printf("%c",ch);

        yCord++;
    }
}

void setcolor(int ForgC) //for changing the forGround color
{
     WORD wColor;


     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
