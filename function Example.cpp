#include<iostream>
using namespace std;


void helloMsg(){
    cout<<"HELLO CLASS"<<endl;
return;
}

int factorial(int n){ //here n is a formal parameter
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

double add(double op1, double op2){
    double result = op1+op2;
    return result;
}

void swapV(int a,int b){ // pass by Value
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout<<"Inside SwapV"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}

void swapR(int *a,int *b){ // pass by Reference
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    cout<<"Inside SwapR"<<endl;
    cout<<*a<<endl;
    cout<<*b<<endl;
}

int main(){
    helloMsg();

    int x;

    //int n;
   // cin>>n;
    //cout<<"Fact of N:"<<factorial(n)<<endl;

    cout<<factorial(6)<<endl;//here 6 is an actual parameter

    cout<< factorial(factorial(3))<<endl;

    x = add(factorial(5),factorial(4));
    cout<<x<<endl;

    cout<<"Add : "<<add(4.5,5.7)<<endl;

    int a,b;
    a=10;
    b=20;
    swapV(a,b); //call by value
    cout<<"Inside main"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    swapR(&a,&b); //call by reference
    cout<<"Inside main"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;


return 0;
}
