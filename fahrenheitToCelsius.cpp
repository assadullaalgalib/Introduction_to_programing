
#include<iostream>
using namespace std;
int main()
{
    int F,C; //c for celsius f for fahrenheit
    cout<<"Enter temp in fahrenheit :"<<endl;
    cin>> F;
    C=(F-32)*5/9;
    cout<<"temp in Celsious:"<<C<<endl;
    return 0;
}
