#include<iostream>
using namespace std;

int main () {
    float value1, value2;
    char op;
    cout<<"Type in your expression"<<endl;

    cin>>value1>>op>>value2;

    if(op == '+'){
        cout<<"Addition : "<<value1+value2<<endl;
    }
    else if(op == '-'){
        cout<<"Subtraction : "<<value1-value2<<endl;
    }
    else if(op == '*'){
        cout<<"Multiplication : "<<value1*value2<<endl;
    }
    else if(op == '/'){
        cout<<"Division : "<<value1/value2<<endl;
    }
    else if(op == '%'){
        cout<<"MOD : "<<(int)value1%(int)value2<<endl;
    }
    else{
        cout<<"Invalid Operator"<<endl;
    }



return 0;
}


