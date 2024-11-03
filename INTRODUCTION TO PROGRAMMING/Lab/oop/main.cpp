#include <iostream>
#include <cstring>

using namespace std;
class person
{
private:
    string name;
    int age;
public:
    person()
    {
        cout<<"This is empty person"<<endl;
    }
    person(string name,int age)
    {
        cout<<"This is paremetarized person"<<endl;
        this->name=name;
        this->age=age;
    }
    void setname(string name)
    {
        this->name=name;
    }
    void setage(int age)
    {
        this->age=age;
    }
    void showall()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
class student:public person
{
private:
    double cgpa;
public:
    student()
    {
        cout<<"This is empty student"<<endl;
    }
    student(string name,int age,double cgpa):person(name,age)
    {
        cout<<"This is parametarized student"<<endl;
        this->cgpa=cgpa;
    }
    void setcgpa(double cgpa)
    {
        this->cgpa=cgpa;
    }
    void showcgpa()
    {
        person::showall();
        cout<<"cgpa:"<<cgpa<<endl;
    }
};
class teacher:public person
{
private:
    double salary;
public:
    teacher()
    {
        cout<<"This is empty teacher"<<endl;
    }
    teacher(string name,int age,double salary):person(name,age)
    {
        cout<<"This is parametarized constructor"<<endl;
        this->salary=salary;
    }
    void setsalary(double salary)
    {
        this->salary=salary;
    }
    void showsalary()
    {
        person::showall();
        cout<<"salary :"<<salary<<endl;
    }
};


int main()
{
    person p1;
    p1.setname("tishat");
    p1.setage(20);
    p1.showall();
    student s1;
    s1.setname("towsif");
    s1.setage(22);
    s1.setcgpa(3.99);
    s1.showcgpa();
    student s2("tishat",22,3.99);
    s2.showcgpa();
    teacher t1;
    t1.setname("mazid");
    t1.setage(28);
    t1.setsalary(50000);
    t1.showsalary();
    return 0;
}
