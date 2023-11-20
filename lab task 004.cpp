#include <iostream>
using namespace std;

class PoweredDevice

{
public:
    double power;
    PoweredDevice(double p)
    {

        power=p;
        cout<<"Device Power: "<<power<<endl;
    }

};

class Scanner: public PoweredDevice

{
public:
    double scanner;
    Scanner(double s,double p):PoweredDevice(p)

    {
        scanner=s;
        cout<<"Value of Scanner: "<<scanner<<endl;
    }
};

class Printer:public PoweredDevice

{
public:
    double printer;
    Printer(double pr,double p): PoweredDevice(p)
    {
        printer=pr;
        cout<<"Value of Printer: "<<printer<<endl;
    }

} ;

class PhotoCopier: public Scanner
{
public:
    double photocopier;
    PhotoCopier(double ph,double s,double p): Scanner(s,p)
    {
        photocopier=ph;
    }

};


int main()
{
    PoweredDevice p(400);
    cout<<endl;
    Scanner s(5000,500);
    cout<<endl;
    Printer pr(4000,400);


    return 0;
}

