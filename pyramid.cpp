#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    
    int n,a,b,x=1;
    cout<<"Enter the value of steps : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(a=i; a<n; a++)    cout<<"  ";
        for(b=1; b<=x; b++)   cout<<" o";     
        x=x+2;
        cout<<endl;
    }    
    getch();
    return 0;
}
