#include <iostream>
using namespace std;

class Purvesh {
  public:
    void Func() {
      cout << "My Name Is Purvesh \n";
    }
};
class Father : public Purvesh {
  public:
    void Func() {
      cout << "Here i am Father \n";
    }
};
class Husband : public Purvesh {
  public:
    void Func() {
      cout << "Here i am Husband \n";
    }
};
class Son : public Purvesh {
  public:
    void Func() {
      cout << "Here i am Son \n";
    }
};

int main() {
  Purvesh myName;
  Father myFather;
  Husband myHusband;
  Son mySon;

  myName.Func();
  myFather.Func();
  myHusband.Func();
  mySon.Func();
  return 0;
}
