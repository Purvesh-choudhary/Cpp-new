#include<iostream>
#include<conio.h>
using namespace std;

class zoo
{
    public :
    int animal()
    {
        cout<<"1.Lion\n2.Tiger\n3.Bear";
        return 0;
    }
    int bird()
    {
        cout<<"1.Eagle\n2.Duck\n3.Sparrow";
        return 0;
    }
};

class petshop : public zoo
{
    public :
    int cute()
    {
        cout<<"1.Hamster\n2.Dog\n3.Cat";
        return 0;
    }
    int Food()
    {
        cout<<"1.Dog food\n2.Cat food";
        return 0;
    }
};

int main()
{
    petshop k;
    cout<<"Program executed :-";
    cout<<endl<<endl;
    k.animal();
    cout<<endl<<endl;
    k.bird();
    cout<<endl<<endl;
    k.cute();
    cout<<endl<<endl;
    k.Food();  
}
