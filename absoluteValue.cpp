#include<iostream>
using namespace std;

int main ()
{
    int number;

    cout<<"Input a Number : ";
    cin>>number;

   // if(Logical Expression){ body }
   // the program enters inside the body of if, if the condition is true
   if(number < 0)
   {
      cout<<"Inside if's body"<<endl;
      number = -number;
   }


    cout<<"Absolute Value : "<<number<<endl;


return 0;
}
