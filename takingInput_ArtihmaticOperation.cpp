#include <iostream> //header file
using namespace std;

int main()
{
    //taking input from user

 /*   int num1,num2,sum;


    cout<<"Enter two numbers:";
    cin>>num1;
    cin>>num2;


    sum=num1+num2;
    cout<<"The result is:"<<sum<<endl;

    return 0;*/


/*
        int / int => int        integer division
        float / int => float    real division
        int / float => float    real division
        float / float => float  real division
*/

    //Arithmetic Operation

    int num1,num2;

    cout<<"Enter 2 numbers:";

    cin>>num1>>num2;

    int sum=num1+num2;
    cout<<"The summation is:"<<sum<<endl;

    int sub=num1-num2;
    cout<<"The subtraction is:"<<sub<<endl;

    int mul=num1*num2;
    cout<<"The multiplication is:"<<mul<<endl;

    int div=(float)num1/num2; //type casting
    cout<<"The division is:"<<div<<endl;

    int rem=num1%num2;
    cout<<"The remainder is:"<<rem<<endl;

    return 0;

}
