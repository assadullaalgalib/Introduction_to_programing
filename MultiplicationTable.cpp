#include <iostream>
using namespace std;

int main()
{
    int i,num,result;

    cout<<"enter a number:";
    cin>>num;

    for(i=1;i<=10;i++)
    {
       result=i*num;
       cout<<num<<"X"<<i<<"="<<result<<endl;
    }




    return 0;
}

