#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>

int main()
{
    long double a,b,c;
    system("cls");
    cout<<"Quadratic Equation Solver :- ax^2+bx+c=0"<<endl;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    cout<<"Enter the value of c = ";
    cin>>c;
    long double d=sqrt(b*b-4*a*c);
    long double x1= (-b+d)/(2*a); 
    long double x2= (-b-d)/(2*a);
    cout<<"ans x+ = "<<x1<<endl;
    cout<<"ans x- = "<<x2<<endl;
    getch();
}