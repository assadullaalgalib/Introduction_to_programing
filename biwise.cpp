#include <iostream>
using namespace std;

int main()
{
    int a=32, b=12, c;

    c=a&b;   //bitwise AND, Symbol= &
    cout<<c<<endl;

    c=a|b;    //bitwise OR, Symbol= |
    cout<<c<<endl;

    c=a^b;    //bitwise XOR, Symbol= ^
    cout<<c<<endl;

    c=a>>3;   //bitwise SHIFT RIGHT, Symbol= >>
    cout<<c<<endl;

    c=a<<3;   //bitwise SHIFT LEFT, Symbol= <<
    cout<<c<<endl;

    c=~a;   //bitwise NOT, Symbol= ~
    cout<<c<<endl;




    return 0;
}
