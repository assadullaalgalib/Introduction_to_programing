#include <iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<"Enter how many numbers:";
    cin>>n;

    int array1[n],array2[n];

    for(i=0;i<n;i++)
    {
        cin>>array1[i];
    }

    cout<<"Printing Array 1:";

    for(i=0;i<n;i++)
    {
        cout<<array1[i]<<" ";
    }

    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }

    cout<<endl;
    cout<<"Printing Array 2:";

    for(i=0;i<n;i++)
    {
        cout<<array2[i]<<" ";
    }




    return 0;
}
