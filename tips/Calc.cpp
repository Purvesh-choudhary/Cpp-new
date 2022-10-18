#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int jod(int fn, int sn);   
    int a,b,c,sum,r;   
    cout<<"Enter Value : "; cin>>a;
    cout<<" + ";            cin>>b;
    sum=jod(a,b); 
    cout<<"ans : "<<sum;

    loop:
    cout<<" + ";            cin>>c;
    sum=jod(sum,c);
    cout<<"ans : "<<sum;
    if(c!=0) goto loop;

    return 0;
}
int jod(int fn, int sn)
{
    int result = fn+sn;
    return(result);
}