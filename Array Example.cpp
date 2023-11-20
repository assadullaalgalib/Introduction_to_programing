#include <iostream>
using namespace std;

int main()
{
    int i,n,sum=0,min,max;
    float avg;
    cout<<"Enter number of students:";

    cin>>n;

    int students[n];

    for(i=0;i<n;i++)
    {
        cout<<"Enter marks for student "<<i+1<<":";
        cin>>students[i];
        sum=sum+students[i];
    }

    cout<<"Total mark is:"<<sum<<endl;

    avg=(float)sum/n;
    cout<<"Average is:"<<avg<<endl;

    max=students[0];
    min=students[0];

    for(i=1;i<n;i++)
    {
        if(max<students[i])
        {
            max=students[i];
        }

        if(min>students[i])
        {
            min=students[i];
        }

    }
        cout<<"Maximum is:"<<max<<endl;
        cout<<"Minimum is:"<<min<<endl;




    return 0;
}
