#include <iostream>
#include<cstring>
using namespace std;
class Student
{
    string name;
    string Id;
    double cgpa;
public:
    Student()
    {
      cout<<"Empty constructor"<<endl;
    }
    Student(string n,string I,double c)
   {
    cout<<"Parameterized constructor"<<endl;
    name=n;
    Id=I;
    cgpa=c;
   }
    void setName (string n)
    {
        name=n;
    }
    string getName()
    {
        return name;
    }
    void setId (string I)
    {
        Id=I;
    }
    string getId()
    {
        return Id;
    }
    void setCgpa (double c)
    {
        cgpa=c;
    }
    double getCgpa()
    {
        return cgpa;
    }

};
int main()
{
 Student s1;
 s1.setName("Farjana Opi");
 s1.setId("22-47018-1");
 s1.setCgpa(3.50);
 cout<<"Name:"<<s1.getName()<<endl;
 cout<<"Id:"<<s1.getId()<<endl;
 cout<<"Cgpa:"<<s1.getCgpa()<<endl;
 Student s2("Farjana Opi","22-47018-1",3.50);
 cout<<"Name:"<<s2.getName()<<endl;
 cout<<"Id:"<<s2.getId()<<endl;
 cout<<"Cgpa:"<<s2.getCgpa()<<endl;


    return 0;
}
