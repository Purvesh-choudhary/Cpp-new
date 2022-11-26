#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

class emp
{
  public:
  int id, age;
  char name[10], post[10], phone[12];
  char rank;

  public:
  void input()
  {
    id=rand();
    cout<<"Enter Details of employee "<<id<<" -"<<endl;
    cout<<"Name   :";
    cin>>name;
    cout<<"Age    :";
    cin>>age;
    cout<<"Post   :";
    cin>>post;
    cout<<"Phone  :";
    cin>>phone;
    cout<<"Rank   :";
    cin>>rank;
  }
  void output()
  {
    cout<<"\nDetails of employee "<<id<<" -"<<endl;  
    cout<<"Name   :"<<name<<endl;
    cout<<"Age    :"<<age<<endl;
    cout<<"Post   :"<<post<<endl;
    cout<<"Phone  :"<<phone<<endl;
    cout<<"Rank   :"<<rank<<endl;
  }
};
int main()
{
  emp e1,e2,e3;   
  system("cls");
  e1.input();
  e1.output();
  cout<<endl<<endl;
  e2.input();
  e2.output();
  cout<<endl<<endl;
  e3.input();
  e3.output();
  cout<<endl<<endl;
  

  getch();
  return 0;
}