#include <iostream>
using namespace std;

class mammal
{
public:

    mammal()
    {
        cout<<"mammals can give direct birth"<<endl;
    }
};

class wingedAnimal
{
public:

    wingedAnimal()
    {
        cout<<"Winged animals can flap"<<endl;
    }
};

class Bat: public mammal, public wingedAnimal
{
public:

    Bat()
    {
        cout<<"Bats are birds of midnight"<<endl;
    }
};

int main()
{
    Bat bat;

    return 0;
}
