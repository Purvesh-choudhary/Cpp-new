#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
#define clrscr(); system("cls");
int main()
{
    getch();
    cout<<"\nLoading 1 : ";
    for(int i=1; i<=50;i++)
    {
        Sleep(100+(i*10));
        if(i==1) cout<<"1% "; 
        else if (i==50) 
        {   
            cout<<"100%\n"; 
            getch(); 
        } 
        else cout<<"- ";
    }
    for(int i=1; i<=100;i++)
    {  
        clrscr();
        cout<<"Loading 2 : ";   
        cout<<i<<"%";  
        Sleep(50+i*2);            
    }      
}