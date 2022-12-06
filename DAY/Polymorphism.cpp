#include<iostream>
#include<conio.h>
using namespace std;

class number
{
    public:
    void num(int x)
    {
        cout<<"Value of x is "<<x<<endl;
    }
    void num(double x)
    {
        cout<<"Value of x is "<<x<<endl;
    }
    void num(int x, int y)
    {
        cout<<"Value of x is "<<x<<endl;
        cout<<"Value of y is "<<y<<endl;
    }
};

int main()
{
    number obj;
    obj.num(7);
    obj.num(0.1);
    obj.num(10,20); 
    return 0;      
}