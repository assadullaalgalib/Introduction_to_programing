#include<iostream>
using namespace std;
int main()
{
    int num,first=0,secound=1,next;
    cout << "Enter fibonacci series :"<<endl;
    cin>>num;
    for (int i=0;i<num;i++)
    {
        cout <<first<<endl;
        next=first+secound;
        first=secound;
        secound=next;
    }
    cout<<"fibonacci series :"<<endl;
}
