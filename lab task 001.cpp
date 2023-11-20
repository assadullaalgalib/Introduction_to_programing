#include <iostream>
using namespace std;

class person
{
private:
    string name="";
    int age;

public:
    void setName(string a)
    {
        name=a;
    }
    string getName()
    {
        return name;
    }

    void setAge(int b)
    {
        age=b;
    }
    int getAge()
    {
        return age;
    }

};

class student:public person
{
private:
    float cgpa;

public:
    void setCGPA(float c)
    {
        cgpa=c;
    }
    float getCGPA()
    {
        return cgpa;
    }
};

class teacher:public person
{
  private:
      double salary;

  public:
    void setSalary(double d)
    {
        salary=d;
    }
    double getSalary()
    {
        return salary;
    }

};

int main()
{
  student test1;
  test1.setName("Galib");
  test1.setAge(20);
  test1.setCGPA(3.75);

  cout<<"Student "<<test1.getName()<<endl;
  cout<<"Age "<<test1.getAge()<<endl;
  cout<<"CGPA: "<<test1.getCGPA()<<endl;

  teacher test2;
  test2.setName("Md. Rahim");
  test2.setAge(30);
  test2.setSalary(30000);

  cout<<"Teacher "<<test2.getName()<<endl;
  cout<<"Age "<<test2.getAge()<<endl;
  cout<<"Salary: "<<test2.getSalary()<<endl;

  return 0;
}

