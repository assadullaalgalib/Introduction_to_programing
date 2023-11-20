#include<iostream>
using namespace std;

class Makeem

{
    public:

    void showAssets1()
    {
        cout<<"Residence : Mansion"<<endl;
        cout<<"Vehicle   : Ford Mustang"<<endl;
    }
};


class Hakeem : public Makeem
{
    public:

    void showAssets2()
    {
        showAssets1();
        cout<<"Property  : Casino"<<endl;
    }
};



class Rakeem : public Hakeem
{
    public:

    void showAssets3()
    {
        showAssets2();
        cout<<"Investment: Garments Industry"<<endl;
    }
};


int main()
{
    Makeem makeem;
    cout<<" Mr. Makeem"<<endl;
    makeem.showAssets1();
    cout<<endl;

    Hakeem hakeem;
    cout<<" Mr. Hakeem"<<endl;
    hakeem.showAssets2();
    cout<<endl;

    Rakeem rakeem;
    cout<<" Mr. Rakeem"<<endl;
    rakeem.showAssets3();
    cout<<endl;

    return 0;
}
