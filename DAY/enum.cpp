#include<iostream>
using namespace std;

enum player_weapons{sword, hammer, bowarrow, knife, axe};

int main()
{
    enum player_weapons current_meele;
    current_meele = knife;
    cout<<"State value : "<<current_meele;
    return 0;
}
