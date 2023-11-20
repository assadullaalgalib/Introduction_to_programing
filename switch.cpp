#include<iostream>
using namespace std;

int main ()
{

    char option;

    cout<< "Enter your option : ";
    cin>>option;

    switch(option)
{
    case '+':
        cout<<"Case +"<<endl;
        break;
    case '-':
        cout<<"Case -"<<endl;
        break;

    case '*':
        cout<<"Case *"<<endl;
        break;
    case '/':
            cout<<"Case /"<<endl;
       break;

    default:
        cout<<"Invaild Operator"<<endl;
    }


return 0;
}

