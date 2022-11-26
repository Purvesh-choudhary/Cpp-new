#include<iostream>
#include<conio.h>
using namespace std;

typedef struct employee
{
  int age;
  char name[10], post[10], phone[12], rank;
}emp;

int main()
{
  int x,id=100;
  emp e['x']; system("cls");
  
  cout<<"Enter the no. of employee : ";
  cin>>x; x--;
  for(int i=0; i<=x; i++)
  {
    id++;
    cout<<"\nEnter Details of employee "<<id<<" -"<<endl;
    cout<<"Name   :";
    cin>>e[i].name;
    cout<<"Age    :";
    cin>>e[i].age;
    cout<<"Post   :";
    cin>>e[i].post;
    cout<<"Phone  :";
    cin>>e[i].phone;
    cout<<"Rank   :";
    cin>>e[i].rank;

    cout<<"\nDetails of employee "<<id<<" -"<<endl;  
    cout<<"Name   :"<<e[i].name<<endl;
    cout<<"Age    :"<<e[i].age<<endl;
    cout<<"Post   :"<<e[i].post<<endl;
    cout<<"Phone  :"<<e[i].phone<<endl;
    cout<<"Rank   :"<<e[i].rank<<endl;
   
    cout<<"press enter to next -> ";
    getch();
  }
  getch();
  return 0;
}