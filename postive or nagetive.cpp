
#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Enter the number to be checked : ";
    cin >> num;
    if (num >= 0)
        cout << "a positive number."<<num<<endl;
    else
        cout << "a negative number."<<num<<endl;
    return 0;
}
