#include <iostream>
using namespace std;



/*  function definition

    returnType functionName(FormalParameterList){
        //body

        returnStatement // optional for void returnType
    }
*/

void addition(int,int); //function prototype
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

void helloMsg(){
    //called function
    cout<<"HELLO CLASS"<<endl;
   // multiplication(5,7);


return;
}

int main()
{
     int a,b;
     cin>>a>>b;
     helloMsg(); //calling function
     addition(a,b); //addition(actual parameter)
     subtraction(20,10);
     multiplication(10,10);
     division(45,10);

   cout<<"Inside main function!"<<endl;


    return 0;
}

void addition(int a,int b) //function define
{
    int sum=0;

    sum=a+b;

    cout<<"The sum is:"<<sum<<endl;
}




void subtraction(int a,int b)
{
    int sub=0;

    sub=a-b;

    cout<<"The sub is:"<<sub<<endl;
}



void multiplication(int a,int b)
{
    int result;

    result=a*b;

    cout<<"The multiplication is:"<<result<<endl;
}




void division(int a,int b)
{
    float result=(float)a/b;

    cout<<"The division is:"<<result<<endl;
}


