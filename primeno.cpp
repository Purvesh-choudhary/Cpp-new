//program to check the given no is prime or not

#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int n,p=0;
    cout<<"Enter the value : ";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)  
            p+=1;
    }
    if (p==0)        
        cout<<n<<" is a Prime No.";
    else             
        cout<<n<<" is not prime No. ";
    getch();
    return 0;
}