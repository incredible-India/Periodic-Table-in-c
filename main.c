//predefine headers file
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

//user define header fies
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

//starting 14/01/2021
//finish  14/01/2021
//Himanshu Kumar Sharma B.E 3rd Sem
