#include<iostream>
using namespace std;

int main(){

    int n=0;
    cout<<  n <<endl; //n=0
    cout << n++ <<endl<<endl;// n=0 n++ here ++ is used after variable that is known as post increment
                       // n++ means n = n+1;
                       //incrementation is done after the statement is executed

    cout << (++(++n))++ <<endl<<endl;//n=3 ++n here ++ is used before variable that is known as pre increment
                   // ++n means n = n+1;
                   //incrementation is done before the statement is executed
    cout<< --n <<endl; //n=3
    cout<< n-- <<endl; //n=3
    cout<< n <<endl; //n=2
return 0;
}

