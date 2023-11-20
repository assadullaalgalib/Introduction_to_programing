//1+3+5+....+n (sum of odd numbers from 1 to n)

#include <iostream>
using namespace std;

int main()
{
    int num,sum=0,i;

    cout<<"Enter a number:";
    cin>>num;

    for(i=1;i<=num;i+=2)
    {
        sum=sum+i;
    }
    cout<<sum;
}
