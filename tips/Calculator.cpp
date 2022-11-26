#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int x,y; 
    char o;
    cout<<"Enter Value : ";  cin>>x;
    loop :
    cin>>o; //  take operator
    switch (o)
    {
        case '+': cin>>y;
                cout<<"ans : "<<x+y;  x+=y;
                break;
        case '-': cin>>y;
                cout<<"ans : "<<x-y;  x-=y;
                break;
        case '*': cin>>y;
                cout<<"ans : "<<x*y;  x*=y;
                break;          
        case '/': cin>>y;
                cout<<"ans : "<<x/y;  x/=y;
                break;
        case 'q': exit(0); 
                break;          
        default:  cout<<"type valid operator(+ - * /) or use q for quit program ";
                break;
    }     
    goto loop;
    return 0;
}