#include <iostream>
#include<cstring>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string bloodgroup;
public:
    Person()
    {

    }
    Person(string name,int age,string bloodgroup)
    {
        this->name=name;
        this->age=age;
        this->bloodgroup=bloodgroup;
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
    void setBloodgroup(string bloodgroup)
    {
        this->bloodgroup=bloodgroup;
    }
    string getBloodgroup()
    {
        return bloodgroup;
    }
    void showPersoninfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Bloodgroup : "<<bloodgroup<<endl;
    }
};
class Student:public Person
{
private:
    string id;
public:
    Student()
    {

    }
    Student(string name,int age,string bloodgroup,string id):Person(name,age,bloodgroup)
    {
        cout<<"Student information : "<<endl;
        this->id=id;
    }
    void setId(string id)
    {
        this->id=id;
    }
    string getId()
    {
        return id;
    }
    void showStudentinfo()
    {
        Person::showPersoninfo();
        cout<<"Student id: "<<id<<endl;
    }
};
class Graduatestudent:public Student
{
private:
    int gradyear;
public:
     Graduatestudent()
     {

     }
     Graduatestudent(string name,int age,string bloodgroup,string id,int gradyear):Student(name,age,bloodgroup,id)
     {
         this->gradyear=gradyear;
     }
     void setGradyear(int gradyear)
     {
         this->gradyear=gradyear;
     }
     int getGradyear()
     {
         return gradyear;
     }
     void showGradstudent()
     {
         cout<<"\nGraduate student information: "<<endl;
         Student::showStudentinfo();
         cout<<"Graduation year: "<<gradyear<<endl;
     }

};
class Employee:public Person
{
private:
    double salary;
public:
    Employee()
    {

    }
    Employee(string name,int age,string bloodgroup,double salary):Person(name,age,bloodgroup)
    {
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
    void showEmployeeinfo()
    {
        Person::showPersoninfo();
        cout<<"Salary : "<<salary<<endl;
    }
};
class Officer:public Employee
{
private:
    string joindate;
public:
    Officer()
    {

    }
    Officer(string name,int age,string bloodgroup,double salary,string joindate):Employee(name,age,bloodgroup,salary)
    {
        this->joindate=joindate;
    }
    void setJoindate(string joindate)
    {
        this->joindate=joindate;
    }
    string getJoindate()
    {
        return joindate;
    }
    void showOfficerinfo()
    {
    cout<<"\nOfficer information: "<<endl;
    Employee::showEmployeeinfo();
    cout<<"Joining date : "<<joindate<<endl;
    }
};
class Faculty:public Employee
{
private:
    string facdept;
public:
    Faculty()
    {

    }
    Faculty(string name,int age,string bloodgroup,double salary,string facdept):Employee(name,age,bloodgroup,salary)
    {
        this->facdept=facdept;
    }
    void setFacultydept(string facdept)
    {
        this->facdept=facdept;
    }
    string getFacultydept()
    {
        return facdept;
    }
    void showFacultyinfo()
    {
        cout<<"\nFaculty information:"<<endl;
        Employee::showEmployeeinfo();
        cout<<"Department: "<<facdept<<endl;
    }
};


int main()
{
    Student s1("Farjana Yesmin Opi",21,"O+","22-47018-1");
    s1.showStudentinfo();
    Graduatestudent g1("Omi",25,"O+","17-47018-1",2020);
    g1.showGradstudent();
    cout<<"\nEmployee information: "<<endl;
    Employee E1("Wakil",35,"B+",30000);
    E1.showEmployeeinfo();
    Officer O1("Walid",40,"A+",40000,"11-12-2012");
    O1.showOfficerinfo();
    Faculty f1("Mazid-ul-haque",28,"B+",50000,"FST");
    f1.showFacultyinfo();
    return 0;
}
