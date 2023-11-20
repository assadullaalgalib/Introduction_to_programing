#include <iostream>
using namespace std;

int main()
{
    int x=5, y=3, z=2;

    x+=y;
    x=x+y;  //x=x+y
    cout<<x<<endl;

    x=6;
    x-=y;    //x=x-y
    cout<<x<<endl;

    z*=y;
    cout<<z<<endl;


    return 0;
}
