#include<iostream>
using namespace std;
class person
{
public:
//variable type
string name;
string address;
string phone_number;
string email;
string LinkedIn;
person(string nam, string adrs, string num, string mail, string lindn) //person Parameterize constructor

{
name=nam;
address=adrs;
phone_number=num;
email=mail;
LinkedIn=lindn;
}

void getinfo()
{
cout<<"Person name is "<<name<<endl;

cout<<"Person Address is "<<address<<endl;

cout<<"Person Phone number is "<<phone_number<<endl;

cout<<"Person E-mail address is "<<email<<endl;

cout<<"Person LinkedIn profile is "<<LinkedIn<<endl<<endl;
}
};

class Employee: virtual public person
{
public :
//variable type
string salary;
string last_job;
string experience;
public:
Employee(string nam, string adrs, string num, string mail, string lindn,string lj, string in, string exp ):person(nam,adrs,num,mail,lindn) //Employee Parameterize constructor

{
last_job=lj;

salary=in;

experience=exp;
}

void getinfo()
{
cout<<"Employee Name is:" <<name<<endl;

cout<<"Employee Address is:" <<address<<endl;

cout<<"Employee Phone number is:" <<phone_number<<endl;

cout<<"Employee E-mail address is:" <<email<<endl;

cout<<"Employee LinkedIn profile is:" <<LinkedIn<<endl;

cout<<"Employee Last job is:" <<last_job<<endl;

cout<<"Employee Experience is:" <<experience<<endl;

cout<<"Employee salary is:" <<salary<<"tk"<<endl<<endl;
}
};

class officer: public Employee

{
private:
//variable type
string Surname;

public:
officer(string nam, string adrs, string num, string mail, string exp ,string sunmn,string lindn,string lj, string in ) :Employee(nam,adrs,num,mail,lindn,lj,in, exp ), person(nam,adrs,num,mail,lindn)//officer Parameterize constructor
{
Surname=sunmn;
}

void getinfo()
{
cout<<"Officer Name is:" <<name<<endl;

cout<<"Officer Address is:" <<address<<endl;

cout<<"Officer Phone number is:" <<phone_number<<endl;

cout<<"Officer E-mail address is:" <<email<<endl;

cout<<"Officer Experience is:" <<experience<<endl;

cout<<"Officer Surname is:" <<Surname<<endl;

cout<<"Officer LinkedIn profile is:" <<LinkedIn<<endl;

cout<<"Officer Last job is:" <<last_job<<endl;

cout<<"Officer salary is:" <<salary<<"tk"<<endl<<endl;
}
};

class faculty: public Employee
{
private:

string faculty_sub_nem;
string Education;
public:

faculty (string nam, string adrs, string num, string mail, string lindn,string lj, string in, string fanm, string edu, string exp):Employee(nam,adrs,num,mail,lindn,lj,in,exp) , person(nam,adrs,num,mail,lindn)//faculty Parameterize constructor
{
faculty_sub_nem=fanm;
Education=edu;
}

void getinfo()
{
cout<<"Faculty Teacher Name is:" <<name<<endl;

cout<<"Faculty Subject Name is:" <<faculty_sub_nem<<endl;

cout<<"Faculty Teacher completed Education from:" <<Education<<endl;

cout<<"Faculty Address is:" <<address<<endl;

cout<<"Faculty Phone number is:" <<phone_number<<endl;

cout<<"Faculty E-mail address is:" <<email<<endl;

cout<<"Faculty LinkedIn profile is:" <<LinkedIn<<endl;

cout<<"Faculty Last job is:" <<last_job<<endl;

cout<<"Faculty salary is:" <<salary<<"tk"<<endl<<endl;
}
};

class student:virtual public person

{
public:
//variable type
double cgpa;
public:
student (string nam, string adrs, string num, string mail, string lindn, double c ):person(nam,adrs,num,mail,lindn)//student Parameterize constructor
{
cgpa=c;
}

void getinfo()

{
cout<<"Student name is "<<name<<endl;

cout<<"Student Address is "<<address<<endl;

cout<<"Student Phone number is "<<phone_number<<endl;

cout<<"Student E-mail address is "<<email<<endl;

cout<<"Student LinkedIn profile is "<<LinkedIn<<endl;

cout<<"Student CGPA is "<<cgpa<<endl<<endl;
}
};

class scholarship_student:public student

{
private:
//variable type
int waiver;
public:
scholarship_student(string nam, string adrs, string num, string mail, string lindn, double c, int wvr ):student(nam,adrs,num,mail,lindn,c ) , person(nam,adrs,num,mail,lindn)//scholarship_student Parameterize constructor
{
waiver=wvr;
}

void getinfo()
{
cout<<"Scholarship Student name is "<<name<<endl;

cout<<"Scholarship Student Address is "<<address<<endl;

cout<<"Scholarship Student Phone number is "<<phone_number<<endl;

cout<<"Scholarship Student E-mail address is "<<email<<endl;

cout<<"Scholarship Student LinkedIn profile is "<<LinkedIn<<endl;

cout<<"Scholarship Student CGPA is "<<cgpa<<endl;

cout<<"Scholarship Student waiver is "<<waiver<<"%"<<endl<<endl;
}
};

class ta : private Employee ,private student

{
public:
ta(string nam,string adrs,string num,string mail,string lindn,double c,string exp,string lj,string in ):Employee(nam,adrs,num,mail,lindn,lj,in, exp ),student(nam,adrs,num,mail,lindn,c ),person(nam,adrs,num,mail,lindn)
{
}
void getinfo()

{
cout<<"TA name is "<<name<<endl;

cout<<"TA Address is "<<address<<endl;

cout<<"TA Phone number is "<<phone_number<<endl;

cout<<"TA E-mail address is "<<email<<endl;

cout<<"TA LinkedIn profile is "<<LinkedIn<<endl;

cout<<"TA Experience is: "<<experience<<endl;

cout<<"TA CGPA is "<<cgpa<<endl<<endl;
}
};

int main()
{
person p1("Rahim","Rangpur","0177********","khan@gmail","khan");
p1.getinfo();
Employee e1("Karim","kuril","0178*******","karim@gmail","korimkhan","Servay officer","15000","5 yr");
e1.getinfo();
officer o1("Rahmman","Mirpur","01589******","rahaman@gmail","5 yr","manager","rahamankhan","Fild officer","20000");
o1.getinfo();
faculty f1("Wardah saleh","Dhaka","01999******","wardahsalesh@gmail","wardah saleh","Teacher","60000","CSE","AIUB","");
f1.getinfo();
student s1("Assadulla","Thakurgoan","0155********","assadulla@gmail","assadulla",3.50);
s1.getinfo();
ta t1("Mim","Dinjpur","0188********","mim@gmail","mim",3.95, "2 years","","");
t1.getinfo();
scholarship_student ss1("Galib","Rangpur","01776******","galib@gmail","Al Galib",3.75,50);
ss1.getinfo();

return 0;
 }
