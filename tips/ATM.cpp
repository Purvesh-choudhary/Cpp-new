#include<iostream>
#include<string>
using namespace std;

int main()
{
    int pinc=1234,pin,x=0,money=3000,m_temp,c_temp=1,Temp_person=1000;
    char confirm;
    start: system("cls");
    cout<<"\n\n \t\t\tWELCOME TO GDP ATM \n\n";
    if(x==7){cout<<"\nInvalid Pin";x=0;} 
    cout<<"\nPlease Enter 4-digit Pin : ";
    cin>>pin;
    if(pinc==pin)
    {
        Tran: system("cls"); 
        cout<<"\t\t\tTRANSACTION \n\n";
        cout<<"1:Deposit \n2:Transfer \n3:Cash Withdrawal \n4:Balance Inquiry \n5:Pin Change \n6:Exit";
        if(x==7) { cout<<"\nInvalid Choice , Try Agin"; x=0;}
        cout<<"\nEnter Your Choice : ";
        cin>>x;
        switch (x)
        {
        case 1 : case1: system("cls"); 
                 cout<<"\t\t\tDEPOSIT \n\n";
                 cout<<"Enter Your value : Rs. ";
                 cin>>m_temp;
                 cout<<"Confirm? Y/N : ";
                 cin>>confirm;
                 if (confirm=='y')
                 {
                     money=money+m_temp; 
                                    goto Tran;
                 }
                 else               goto case1;     
                 break;    
        case 2 : case2: system("cls"); 
                 cout<<"\t\t\tTRANSFER \n\n";
                 cout<<"Enter Your value : Rs. ";
                 cin>>m_temp;
                 cout<<"Confirm? Y/N : ";
                 cin>>confirm;
                 if (confirm=='y')
                 {
                     money-=m_temp; 
                     Temp_person+=m_temp;
                                    goto Tran;
                 }
                 else               goto case2;     
                 break;
        case 3 : case3: system("cls"); 
                 cout<<"\t\t\tCASH WITHDRAWAL \n\n";
                 cout<<"Enter Your value : Rs. ";
                 cin>>m_temp;
                 cout<<"Confirm? Y/N : ";
                 cin>>confirm;
                 if (confirm=='y')
                 {
                     money-=m_temp; goto Tran;
                 }
                 else               goto case3;     
                 break;
        case 4 : case4: system("cls"); 
                 cout<<"\t\t\tBALANCE INQUIRY \n\n";
                 cout<<"TOTAL MONEY : Rs. "<<money;
                 cout<<"\nBACK? Y/N : ";
                 cin>>confirm;
                 if (confirm=='y')  goto Tran;
                 else               goto case4;
                 break;  
        case 5 : case5: system("cls"); 
                 cout<<"\t\t\tPINCODE CHANGE \n\n";                
                 if(x==7) { cout<<"\n! Wrong Pin"; x=0;}
                 cout<<"\nEnter Existing Pin : ";
                 cin>>c_temp;
                 if(pinc==c_temp)
                 {
                    cout<<"\nEnter New Pin : ";
                    cin>>pin;
                    pinc=pin;       goto start;
                 } 
                 else x=7;          goto case5;
                 break;          
        case 6 : case6: system("cls"); 
                 cout<<"\t\t\tEXIT \n\n";
                 cout<<"\nConfirm? Y/N : ";
                 cin>>confirm;
                 if (confirm=='y')  goto start;
                 else               goto Tran;
                 break;
        default: x=7;               goto Tran;
                 break;
        }

    }
    else { x=7; goto start;} 
    
    return 0;
}