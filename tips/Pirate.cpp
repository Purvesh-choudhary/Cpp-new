#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int x=4;
    char y;
    string name['x']={"luffy","zoro","nami","usopp"};
    start:
    cout<<"\nStrawhat crew- \n"; 
    for(int i=0; i<x; i++) //print members name
        cout<<i+1<<"."<<name[i]<<endl;
    cout<<"\nNew Mem: ";   
    cin>>name[x];
    x++;
    cout<<"confermed? y/n : ";
    cin>>y;
    if(y=='y')
        goto start;
    return 0;
}