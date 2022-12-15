#include<iostream>
using namespace std;

int main()
{
    int a=5,b=19;
    cout<<"value of a before swapping is "<<a<<endl;
    cout<<"value of b before swapping is "<<b<<endl;
    a^=b; b^=a; a^=b;
    cout<<"value of a after swapping is "<<a<<endl;
    cout<<"value of b after swapping is "<<b<<endl;
    return 0;
}