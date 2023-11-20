#include <iostream>
//#include <stdio.h>
using namespace std;

int main()
{
    //char message[6]={'H','e','l','l','o'};
     char message[]={'H','e','l','l','o','\0'};
    int i;

    cout<<message<<endl;

   /* for(i=0;i<6;i++)
    {
        cout<<message[i];
    }

    cout<<endl;*/

    for(i=0;message[i]!='\0';i++)
    {
        cout<<message[i];
    }
    cout<<endl;

    cout << message[1]<<endl;

    char message1[]="World";
    cout<<message1<<endl;

    for(i=0;message1[i]!='\0';i++)
    {
        cout<<message1[i];
    }
    cout<<endl;

    char name[13]="Rahim Karim";
    cout<<name<<endl;

    char full_name[30];
    cout<<"Enter your full name:";
    //cin>>full_name;
    //gets(full_name);
    cin.getline(full_name,30); //character array
    cout<<"Welcome "<<full_name<<endl;

    return 0;
}
