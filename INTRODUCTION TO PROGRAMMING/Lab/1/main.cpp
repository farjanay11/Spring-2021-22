#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person()
    {
        cout<<"This is Empty Person"<<endl;
    }
    Person(string name, int age)
    {
        cout<<"This is Parameterized Person"<<endl;
        this->name=name;
        this->age=age;
    }
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }

    void setAge(int age)
    {
        this->age=age;
    }
    int getAge()
    {
        return age;
    }


    void showAll()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
    class Student:public Person
    {
  private:
    double cgpa;
  public:
    Student()
    {
        cout<<"This is empty student"<<endl;
    }
    Student(string name,int age,double cgpa):Person(name,age)
    {
        cout<<"This is  Parameterized student"<<endl;
        this->cgpa=cgpa;

    }
    void setcgpa(double cgpa)
    {
        this->cgpa=cgpa;
    }
    double getcgpa()
    {
        return cgpa;
    }

    void showcgpa()
    {
        Person::showAll();
        cout<<"CGPA: "<<cgpa<<endl;
    }
    };
    class Teacher:public Person
    {
    private:
        double salary;
    public:
        Teacher()
        {
            cout<<"This is empty teacher"<<endl;
        }
        Teacher(string name,int age,double salary):Person(name,age)
        {
            cout<<"This is Parameterized teacher"<<endl;
            this->salary=salary;
        }
        void setSalary(double salary)
        {
            this->salary=salary;
        }
        double getSalary()
        {
            return salary;
        }
        void showsalary()
        {
            Person::showAll();
            cout<<"Salary :"<<salary<<endl;
        }
    };



int main()
{
    Person p1;
    p1.setAge(20);
    p1.setName("Towsif");
    p1.showAll();
    Person p2("Tishat",25);
    p2.showAll();
    Student s1;
    s1.setAge(12);
    s1.setName("Tishat");
    s1.setcgpa(3.95);
    s1.showcgpa();
    Student s2("Tishat towsif",21,3.99);
    s2.showcgpa();
    Teacher t1;
    t1.setName("Mazid ul haque");
    t1.setAge(30);
    t1.setSalary(50000);
    t1.showsalary();
    Teacher t2("MAzid ul hauque",30,50000);
    t2.showsalary();
    return 0;
}
