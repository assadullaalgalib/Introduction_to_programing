
#include <iostream>

using namespace std;

int main() {

int i, n, sum = 0;
cout << "2+4+6+8.........+n : "<<endl;
cout<<"Enter the vaule of n"<<endl;
cin >> n;

for(i = 1; i <= n; i++)
{
if((i % 2) == 0)
{

sum += i;
}
}

    cout<< "Sum"<< sum <<endl;

    return 0;
}
