#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int t;
    cout<<"table :- \n";
    for(int i=1; i<=10; i++)
    {
        for(int j=11; j<=20; j++)
        {
            cout<<j*i<<"\t";
        }
        cout<<endl;
    }
    return 0;
}  