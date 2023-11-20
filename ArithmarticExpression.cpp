#include<iostream>
#include<math.h>
using namespace std;

int main(){

    /*

        * , / , % have same precedences
        +, - have same precedences
        if operator has same priority then we have to check
            from left to right
    */
    int x;
    x =  3 * 4 / 2 + 3 - 1 ;
    cout << 3 * 4 / 2 + 3 - 1 <<endl;

    cout << 6 + 2 * 3 - 4 / 2<<endl;

    cout << 20 / 3 + 5 % 2<<endl;


    cout << 3 * (2 / 4.0) + (3-1)<<endl;
    cout << (6 + 2) * ((3 - 4) / 2)<<endl;
    cout << 20/(3+5) % 2 <<endl;



    //Quadratic Equation Solving using C++
    float a,b,c;
    a=6;
    b=11;
    c=-35;
    float x1,x2;
    x1 = (-b+pow( pow(b,2) - 4*a*c ,1/2.0)) / (2*a);
    x2 = (-b-pow( pow(b,2) - 4*a*c ,1/2.0)) / (2*a);

    cout<<"X1 = "<< x1 <<endl;
    cout<<"X2 = "<< x2 <<endl;

    //Floating Point Conversion and Type Casting
    cout<< (float)((int)'A'/10)<<endl;
    cout<<"X1 = "<< (int)x1 <<endl;
    cout<<"X2 = "<< (int)x2 <<endl;

return 0;
}
