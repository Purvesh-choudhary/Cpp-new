#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int x;
    int bc['x'];
    system("cls");
    start : 
    cout<<"################################################"<<endl;
    cout<<"#                School Library                #"<<endl;
    cout<<"#                    Ver 1.0                   #"<<endl;
    cout<<"################################################"<<endl;
    cout<<"\n\nNo. of Books : ";
    cin>>x;
    if(x<6){
        for (int i=0; i<x; i++){
            cout<<"Book "<<i+1<<" : ";
            cin>>bc[i];
        }
    }
    else{
        cout<<"!you can't borrow more than 5 books at once"<<endl;
        goto start;
    }    
    for (int i=0; i<x; i++){
        cout<<"Book "<<i+1<<" : "<<bc[i]<<endl;    
    }
    return 0;
}