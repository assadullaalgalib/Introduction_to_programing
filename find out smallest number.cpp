
#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Enter three numbers"<<endl;
    cin >> a >> b >> c;

    if (a < b && a < c) {
        cout << "Smallest number is " << a<<endl;
    }
    else if (b < a && b < c)  {
       cout << "Smallest number is " << b<<endl;
    }
    else {
      cout << "Smallest number is "<< c<<endl;

     }

      return 0;
}
