#include<iostream>
#include<string>
using namespace std;

int main()
{
//variables
    int x=0;
///usernames and password database
    int    Pass1=1234,     Pass2=1122,   Pass3=1212,    Pass;
    string User1="Purvesh",User2="Vinit",User3="Piyush",User;
/////////////////////////////////////////////////////////////
    start: system("cls");
    cout<<"\n\n\t\t\tPROJECT K \n\n";
    if(x==7){cout<<"\nInvalid Username or Password, Try Again\n";x=0;} 
    cout<<"Username : ";
    cin>>User;
    cout<<"Password : ";
    cin>>Pass;
/////////////////////////////////////////////////////////////    
    if(User1==User && Pass1==Pass)
    {
        cout<<"\t\t\tLOGINED As "<<User1;
    }
    else if(User2==User && Pass2==Pass)
    {
        cout<<"\t\t\tLOGINED As "<<User2;
    }
     else if(User3==User && Pass3==Pass)
    {
        cout<<"\t\t\tLOGINED As "<<User3;
    }
    else { x=7; goto start;} 
    
    return 0;
}