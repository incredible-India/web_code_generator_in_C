/*Date : 24/04/2021

B.E 4th Sem, AUTH : Himanshu Kumar Sharma

 This project will generate the code for a web page automatically ...*/

////start///////////

//headers files

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//user Define header files

#include"intro.h"

//structure for the data and its size According to need we will use it
struct heapMEM
{
    char *str;
    int sizeOfData;

};
//global variables

int i,j; //only for loop

//main function start from here....
int main(int argc, char const *argv[])
{


    void (*ShowIntro) (void);//function pointer

    ShowIntro = intro;

    ShowIntro();

    return 0;
}



//Some Basic functions definition here....

//gotoxy function for changing the coordinate of the console window....

void gotoxy(int xCORD,int yCORD)
{
    COORD x;
    x.X=xCORD;
     x.Y=yCORD;

     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);


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
