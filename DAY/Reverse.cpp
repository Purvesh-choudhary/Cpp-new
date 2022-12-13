#include<iostream>
using namespace std;

int main()
{
    int num,rev=0,q,rm;
    cout<<"Enter the Value : ";
    cin>>num;
    q=num;
    while(q>0)
    {
        rm=q%10;
        rev=(rev*10)+rm;
        q=q/10;
    }
    cout<<"Reversed Value : "<<rev<<endl;
}
