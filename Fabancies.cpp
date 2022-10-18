#include<iostream>
using namespace std;

int main()   // Fabancies series no.
{
    int i,n,a=0,b=1,c;
    cout<<"Enter the value off steps : "; 
    cin>>n;
    if(n==1)
        cout<<a<<" ";
    else if(n==2)
        cout<<a<<" "<<b<<" ";
    else
    {
        cout<<a<<" "<<b<<" ";
        for(i=1;i<n-1;i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
    return 0;
}