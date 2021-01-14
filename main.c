#include<stdio.h>
#include<windows.h>
#include"_usedFunction.h"
#include"AllTheFunction.h"

//declarations of all the functions
void menu(void);//it show the menu


//global variable
int i,j;

int main ()
{
   void (*p)(void);
   p=menu;
   p();//it shows the menu


}

