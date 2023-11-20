
#include<iostream>
using namespace std;
int main()
{



int marks;
cout<<"enter marks "<<endl;
 cin>>marks;




 if(marks>=90 && marks<=100)
 {
 cout<<"A+"<<endl;
 }

 else if(marks>=85 && marks<90)
 {
 cout<<"A"<<endl;
 }

 else if(marks>=80 && marks<85)
 {
 cout<<"B+"<<endl;
 }

 else if(marks>=75 && marks>80)
 {
 cout<<"B"<<endl;
 }
else if(marks>=70 && marks<75)
 {
 cout<<"C+"<<endl;
 }
 else if(marks>=65 && marks<70)
 {
 cout<<"C"<<endl;
 }
 else if(marks>=60 && marks<65)
 {
 cout<<"D+"<<endl;
 }
 else if(marks>=50 && marks<60)
 {
 cout<<"D"<<endl;
 }

 else if(marks<50)
 {
 cout<<"F"<<endl;
 }
return 0;
}

