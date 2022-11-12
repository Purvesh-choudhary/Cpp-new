#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    typedef struct mark
    {
        char name[50];
    }mark;
    int no;
    cout<<"Enter the no of students : ";
    cin>>no;
    for(int i=0; i<no; i++)
    {       
        mark student[i];
        cout<<"\nStudent "<<i+1<<"-"<<endl;
        cout<<"name:";
        cin>>student[i].name;
        cout<<"saved name:"<<student[i].name<<endl;
        getchar();
    }    
}