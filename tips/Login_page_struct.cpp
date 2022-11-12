#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;

int main()
{
//////// variables
    struct user
    {
        char name;
        char password;
        float money;    
    };

    user['a']={"u1"}; 

    int x=0,i,user_no=4;
    int a = user_no; //user and pass no.
    char y; //for confirmer
    string s_user;
    int    s_pass;
///////////////////  start  ///////////////////////////////////////
    start: system("cls");
    cout<<"Data Base-"<<endl;    
    for( i=0; i<user_no; i++) //user Hinter
    { 
        cout<<i+1<<"."<<user[i]<<" = "<<pass[i]<<endl;
    }
/////////////// Actual Start
    cout<<"\n\n\t\t\tPROJECT K \n\n";
    if(x==7){x=0; cout<<"Invalid choice"<<endl;} //invalider
    cout<<"1. login \n2. Create a new Account \nChoice :  ";
    cin>>x;
    if(x==1) goto login;
    else if(x==2) goto signup;
    else x=7; goto start;

////////////////////  Sign Up System  ///////////////////////////////
    signup: system("cls");
    cout<<"\n\n\t\t\tPROJECT K \n\nCreate a New Account-"<<endl;
    cout<<"Username : ";
    cin>>s_user;
    cout<<"Password : ";
    cin>>s_pass;
    cout<<"\nConfirmed ? y/n : ";
    cin>>y;
    if(y == 'y') // confirfer
    { 
        user[user_no]=s_user;
        pass[user_no]=s_pass;
        user_no++;
        goto start;
    }
    else  goto start; 
     
////////////////////  login System  ///////////////////////////////
    login: system("cls");
    cout<<"\n\n\t\t\tPROJECT K \n\n";
    if(x==7) //Invalider 
    {
        cout<<"\nInvalid Username or Password \n1.Try Again or 2.Create a New Account \nChoice : ";
        x=0; 
        cin>>x;
        if(x==2)  {x=0; goto signup; } 
    }
    cout<<"Username : ";
    cin>>s_user;
    cout<<"Password : ";
    cin>>s_pass; 
    for( i=0; i<user_no; i++)
    {
        if(user[i]==s_user && pass[i]==s_pass)
        {
            cout<<"\t\t\tLOGINED As "<<user[i];
            break;
        }
        else 
        {
            if( i == (user_no-1) )  //Invalid User name or Password
            {   
                x=7; goto login;
            }
        }
    }
    return 0;
}
