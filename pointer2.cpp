#include <iostream>
using namespace std;

int main()
{
/*
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
    int i ;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        cout<< "address: "<<&num[i];
        cout<<"  element: "<<num[i];
        cout<<endl;
    }
*/



/*
    int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
    int i, *j ;
    j = &num[0] ; //assign ADDRESS of zeroth index or first element
    for ( i = 0 ; i <= 5 ; i++ )
    {
        cout<<"address:" <<j;
        cout<<"   element:" <<*j;
        cout<<endl;
        j++ ; //increment pointer to point to next location
    }
*/

/*
    char name[ ] = "Klinsman" ;
    cout<<name<<endl;
    char *ptr ;

    ptr = name; //stores base or initial address of string
    //ptr=&name[0]; //works same as line 37

    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    while( *ptr != '\0' )
    {
        cout<<*ptr;
        ptr++ ;
    }
    cout<<endl;
*/


/*
char str1[ ] = "Hello" ;
char str2[10] ;
char *s = "Good Morning" ;
char *q;
//str2 = str1 ; //error
q = s ; // works

cout<<*s<<endl;
cout<<s<<endl;

cout<<*q<<endl;
cout<<q<<endl;
*/



char str1[] = "Hello";
//str1[] = "Bye" ; //error

char *p = "Hello" ;
cout<<*p<<endl;
cout<<p<<endl;

p = "Bye" ; //works, value changed

cout<<*p<<endl;
cout<<p<<endl;




    return 0;
}
