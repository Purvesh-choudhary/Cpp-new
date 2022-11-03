#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;

int main()
{
//variables
    int x=0,i;
///usernames and password database
    int    Pass1=1234, Pass2=1122,   Pass3=1212,    Pass;
    string User1="pck",User2="Vinit",User3="Piyush",User;
/////////////////////////////////////////////////////////////
    start: system("cls");
    cout<<"Hints\n*Username : "<<User1 <<"  "<<User2 <<"  "<<User3<<endl;
    cout<<"*Password : "<<Pass1 <<"  "<<Pass2 <<"  "<<Pass3<<endl;
    cout<<"\n\n\t\t\tPROJECT K \n\n";
    if(x==7){cout<<"\nInvalid Username or Password, Try Again\n";x=0;} 
    cout<<"Username : ";
    cin>>User;
    cout<<"Password : ";
    cin>>Pass;
////////////////////  User 1  ///////////////////////////////  
    if(User1==User && Pass1==Pass)
    {
        cout<<"\t\t\tLOGINED As "<<User1;
        cout<<"\nLoading Data : ";
        for(int i=1; i<=50;i++)
        {
            Sleep(100+(i*10));
            if(i==1) cout<<"1% "; 
            else if (i==50) 
            {   
                cout<<"100%\n"; 
                getch(); 
            } 
            else cout<<". ";
        }
    }
////////////////////  User 2  ///////////////////////////////      
    else if(User2==User && Pass2==Pass)
    {
        cout<<"\t\t\tLOGINED As "<<User2;
    }
////////////////////  User 3  ///////////////////////////////      
     else if(User3==User && Pass3==Pass)
    {
        cout<<"\t\t\tLOGINED As "<<User3;
    }
    else { x=7; goto start;} 
    
    return 0;
}