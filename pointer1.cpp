#include <iostream>
using namespace std;

int main()
{
    /*
    int i = 3; //variable
    int *j ; //pointer variable
    j = &i ;

    cout<<"Address of i ="<<&i<<endl;
    cout<<"Address of i ="<<j<<endl;
    cout<<"Address of j ="<<&j<<endl;
    cout<<"Value of j ="<<j<<endl;
    cout<<"Value of i ="<<i<<endl;
    cout<<"Value of i ="<<*(&i)<<endl;
    cout<<"Value of i ="<<*j<<endl;

*/


    int x=5,y=8, sum=0;
    int *p; //pointer of variable x
    int *q;//pointer of variable y
    int **k; //pointer of pointer p


    p=&x;
    q=&y;
    //k=&p;

    sum=*p+*q;

    cout<<sum<<endl;;

/*
    cout<<"value of x="<<x<<endl;
    cout<<"address of x="<<&x<<endl;
    cout<<"value of p or address of x="<<p<<endl;
    cout<<"address of p="<<&p<<endl;
    cout<<"value of x="<<*p<<endl;
    cout<<"value of k or address of p="<<k<<endl;
    cout<<"address of k="<<&k<<endl;
    cout<<"value of p or address of x="<<*k<<endl;
    cout<<"value of x="<<**k<<endl;
*/



    return 0;
}
