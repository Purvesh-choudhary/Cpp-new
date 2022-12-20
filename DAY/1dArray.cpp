#include<iostream>
using namespace std;

int main(){
    int array[10],i;
    
    cout<<"Enter marks for following students -"<<endl;
    for(i=0; i<10; i++){
        cout<<"Student "<<i+1<<" = ";
        cin>>array[i];
    }
    cout<<"Marks for following students Are-"<<endl;    
    for(i=0; i<10; i++){
        cout<<"Student "<<i+1<<" = "<<array[i]<<endl;
    }
    return 0;
}