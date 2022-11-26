#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#define clrscr(); system("cls");
int main()
{
    char c;
    int p;
    clrscr();
    printf("press[A,B,C,D,E,F,G] to play SAREGAMA");
    for(int i=0; i<=10; i++)
    {
        c=getche();
        p=c;
        if(p>96)
        p=(p-32);
        if(p>64 && p<73)
        {
            sound(p*(2000));
            Sleep(p*10);
            nosound();
        }
    }
    getch();
}