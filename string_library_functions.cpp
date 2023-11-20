#include <iostream>
#include <cstring>
//#include <string.h>
using namespace std;

int main()
{

    char name1[]="Rahim"; //first name
    char name2[20],name3[]=" Karim"; //last name
    char name4[]="he",name5[]="he";

    int length,value,i;

    cout<<name1<<endl;

    for(i=0;name1[i]!='\0';i++)
    {
        cout<<name1[i];
    }

    cout<<endl;

    length=strlen(name1); //counts the length of the string
    cout<<"Length of the string is:"<<length<<endl;

    strcpy(name2,name1); //copies one string to another, strcpy(destination, source)
    cout<<"name 2="<<name2<<endl;


    strcat(name1,name3); //concatanates one array with another, strcat(destination,source)
    cout<<"Full name is:"<<name1<<endl;


    strupr(name3); //converts string from lower case to upper case
    cout<<name3<<endl;

    strlwr(name5);  //converts string from upper case to lower case
    cout<<name5<<endl;

    value=strcmp(name4,name5); //compares first string with the second string
    cout<<value<<endl;

    if(value==0)
    {
        cout<<"Strings are matched"<<endl;
    }

    else
    {
        cout<<"Strings are not matched"<<endl;
    }


 return 0;
}
