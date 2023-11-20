#include <iostream>
using namespace std;

int main()
{

     int i,value,pos=-1;
     int a[]={10,30,55,5,8,9,69};

     cout<<"Enter the value you want to search:";
     cin>>value;

     for(i=0;i<7;i++)
     {
         if(value==a[i])
         {
             pos=i+1;
         }
     }

     if(pos==-1)
     {
         cout<<"The value is not found";
     }
     else
     {
         cout<<"The value is found and position is:"<<pos;
     }



    return 0;
}
