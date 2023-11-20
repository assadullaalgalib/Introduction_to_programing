
#include <iostream>
using namespace std;
int main()
 {
   int year;
   cout<<"enter any year :"<<endl;
   cin>>year;
   if (year % 4 == 0)
{
  if (year % 100 == 0)
 {
  if (year % 400 == 0)
  cout << "a leap year is: "<<year<<endl;
  else
  cout <<"a not leap year is:"<<year<<endl;
  } else
  cout<< "a leap year is:"<<year<<endl;
   } else
   cout <<"a not leap year is:"<<year<<endl;
   return 0;
}
