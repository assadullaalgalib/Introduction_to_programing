#include <iostream>
using namespace std;

int main()
{
    int i,N,sum=0,min,max;
    float avg;
    cout<<"Enter number of students:";

    cin>>N;

    int students[N];

    for(i=0;i<N;i++)
    {
        cout<<"Enter marks for student "<<i+1<<":";
        cin>>students[i];
        sum=sum+students[i];
    }

    cout<<"Total mark is:"<<sum<<endl;
    return 0;
}
