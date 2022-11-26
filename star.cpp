#include<iostream>
#include<conio.h>
#include <windows.h>
using namespace std;

void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main ()
{
    int a=40, b=12;
    for(int i=1; i<=9; i+=2)
    {
       int gotoxy(6, 6);
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        a=b+1;
        b=b-1;
    }
    getch();  
    return 0; 
}