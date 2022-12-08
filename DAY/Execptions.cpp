#include <iostream>
using namespace std;

void agechecker(int age){
    try {
        if (age >= 18) {
        cout<<"Access granted - you are old enough.";
        } else {
        throw 505;
        }
    }
    catch (...) {
        cout<<"Access denied - You must be at least 18 years old.\n";
        cout<<"Your Age is "<<age;
    }
}
int main() {
  int age;
  cout<<"Welcome to the Sutta Bar -"<<endl;
  cout<<"Enter Your Age : ";
  cin>>age;
  agechecker(age);
  return 0;
}
