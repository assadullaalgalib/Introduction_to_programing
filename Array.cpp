#include <iostream>
using namespace std;

int main()
{
    int marks[5]; //array declaration

    //int marks[5]={80,65,78,52,93}; //array declaration during initialization
    //int marks[]= {80,65,78,52,93};
    int i;

/* array initialization
    marks[0]=80;
    marks[1]=65;
    marks[2]=78;
    marks[3]=52;
    marks[4]=93;
    */


    /* //output
    cout<<marks[0]<<" ";
    cout<<marks[1]<<" ";
    cout<<marks[2]<<" ";
    cout<<marks[3]<<" ";
    cout<<marks[4]<<" ";
    */

    //input using loop
    for(i=0;i<5;i++)
    {
        cout<<"Enter marks for student "<<i+1<<" = ";
        cin>>marks[i];
    }

    //output using loop
    //cout<<"marks are:";
    for(i=0;i<5;i++)
    {
        cout<<"Marks for student "<<i+1<<"="<<marks[i]<<endl;
    }



    return 0;
}
