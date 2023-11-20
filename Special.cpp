#include <iostream>
using namespace std;

int main()
{
    int i;
    float f;
    double d;
    char c;
    bool b;

    cout<<sizeof(i)<<endl;   //sizeof() represents size of each data type
    cout<<sizeof(f)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(b)<<endl<<endl;

    int x,y,sum;

    sum=(x=20,y=30,sum=x+y);  //expression can be represented using , operator like this  sum=(x=20,y=30,sum=x+y)

    cout<<"the sum is:"<<sum;





    return 0;
}
