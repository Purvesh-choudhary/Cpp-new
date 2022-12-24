#include<iostream>
using namespace std;

int main()
{
    int c=0,x,n;
    cout<<"Enter The Value = ";
    cin>>n;
    x=n;
    while(n>c)
    {
        c=c+(n%10)*(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if (c==x)
    {
        cout<<"It is Armstrong no.";
    }
    else 
    {
        cout<<"It is Not Armstrong No."; 
    }
    return 0;
}