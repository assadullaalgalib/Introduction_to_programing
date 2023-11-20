
#include<iostream>
using namespace std;

int main ()
{
    int num,remainder;
    cout<<"enter a number"<<endl;
    cin>>num;
    while (num>0)
    {
    remainder=num%10;
    cout<<remainder;
    num=num/10;

    }
return 0;
}
