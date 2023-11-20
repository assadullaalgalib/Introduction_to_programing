#include <iostream>
using namespace std;

class Transport

{
  public:
      string engineType;

      string fuelType;

      virtual void printDetails()=0;

      virtual void printSpeed()=0;
};



class Bus:public Transport
{
    int numberOfSeats;

    double topSpeed;


public:

    void fixDetails(string a, string b, int c, double d)

    {
      engineType=a;
      fuelType=b;
      numberOfSeats=c;
      topSpeed=d;
    }
    virtual void printDetails()
    {
        cout<<"Engine type: "<<engineType<<endl;
        cout<<"Fuel type: "<<fuelType<<endl;
        cout<<"Total number of seats: "<<numberOfSeats<<endl;
    }


    virtual void printSpeed()

    {
        cout<<"Top speed in Miles per hour (mph): "<<topSpeed<<endl;
    }

    void convertSpeedtoKM ()
    {
    double x;
    x=topSpeed*1.61;
    cout<<"Speed in kph: "<<x<<endl;
    }

};


class Ship:public Transport
{
    int numberOfDecks;
    double topSpeed;

public:

    void setDetails(string a, string b, int c, double d)
    {
      engineType=a;
      fuelType=b;
      numberOfDecks=c;
      topSpeed=d;
    }

        virtual void printDetails()
    {
        cout<<"Engine type: "<<engineType<<endl;
        cout<<"Fuel type: "<<fuelType<<endl;
        cout<<"Total number of Decks: "<<numberOfDecks<<endl;
    }

    virtual void printSpeed()
    {
        cout<<"speed in Nautical Miles: "<<topSpeed<<endl;
    }

    void convertSpeedtoKM ()
    {
        double y;
        y=topSpeed*1.85;
        cout<<"Speed in kph: "<<y<<endl;
    }
};

int main()
{
 Bus test1;

 test1.fixDetails("Petrol Engine","Petrol",60,55);

 test1.printDetails();

 test1.printSpeed();

 test1.convertSpeedtoKM();


 Ship test2;

 test2.setDetails("Marine Engine", "Fuel Oil", 80, 50);

 test2.printDetails();

 test2.printSpeed();

 test2.convertSpeedtoKM();

}
