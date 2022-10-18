#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a,b;   
    cout<<"Enter Value : "; cin>>a;
    loop:
    cout<<" + ";            cin>>b;; 
    cout<<"ans : "<<a+b;
    a+=b;
    if(b!=0) goto loop;     
    return 0;
}