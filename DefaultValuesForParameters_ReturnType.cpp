#include <iostream>
using namespace std;

int addition1(int,int);
double addition2(double,double);
//void display(int,int);

void display(int a=5, int b=10) //default values for parameter
{

    cout<<a<<endl;
    cout<<b<<endl;


return;
}

int main()
{
     display();
     display(7,8);
     display(6);

     int result=addition1(2,5);
     cout<<result<<endl;
     cout<<addition1(4,10)<<endl;

     cout<<addition2(2.5,3.0)<<endl;

     cout<<"All the functions have called!";


    return 0;
}



int addition1(int a,int b)
{
    int sum=0;

    sum=a+b;

    return sum;
}

double addition2(double a,double b)
{
    double sum=0;

    sum=a+b;

    return sum;
}






