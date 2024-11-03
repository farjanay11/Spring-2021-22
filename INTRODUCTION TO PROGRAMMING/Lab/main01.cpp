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

     cout<<"Graduate student iformation through empty constructor: "<<endl;
     }
     Graduatestudent(string name,int age,string bloodgroup,string id,int gradyear):Student(name,age,bloodgroup,id)
     {
         cout<<"\nGraduate student information through parameterized constructor : "<<endl;
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
        cout<<"Salary is: "<<salary<<endl;
    }
};
class Officer:public Employee
{
private:
    string joindate;
public:
    Officer()
    {
         cout<<"Officer information through empty constructor: "<<endl;
    }
    Officer(string name,int age,string bloodgroup,double salary,string joindate):Employee(name,age,bloodgroup,salary)
    {
        cout<<"Officer information parameterized constructor :"<<endl;
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
    Employee::showEmployeeinfo();
    cout<<"Joining date is: "<<joindate<<endl;
    }
};
class Faculty:public Employee
{
private:
    string facdept;
public:
    Faculty()
    {
        cout<<"Faculty information through empty constructor: "<<endl;
    }
    Faculty(string name,int age,string bloodgroup,double salary,string facdept):Employee(name,age,bloodgroup,salary)
    {
        cout<<"Faculty information through parameterized constructor: "<<endl;
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
        Employee::showEmployeeinfo();
        cout<<"Department: "<<facdept<<endl;
    }
};


int main()
{
    cout<<"Student information through empty constructor: "<<endl;
    Student s1;
    s1.setName("Tishat");
    s1.setAge(21);
    s1.setBloodgroup("A+");
    s1.setId("22-47019-1");
    s1.showStudentinfo();
    cout<<"Student information through parameterized constructor: "<<endl;
    Student s2("Tishat",21,"A+","22-47019-1");
    s2.showStudentinfo();
    Graduatestudent g1;
    g1.setName("Tishat");
    g1.setAge(34);
    g1.setBloodgroup("A+");
    g1.setId("22-47019-1");
    g1.setGradyear(2020);
    g1.showGradstudent();
    Graduatestudent g2("Towsif",34,"A+","22-47019-1",2020);
    g2.showGradstudent();
    cout<<"\nEmployee information through empty constructor: "<<endl;
    Employee E1;
    E1.setName("Rahim");
    E1.setAge(35);
    E1.setBloodgroup("O+");
    E1.setSalary(30000);
    E1.showEmployeeinfo();
    cout<<"\nEmployee information through parameterized constructor:"<<endl;
    Employee E2("Rahim",35,"O+",30000);
    E2.showEmployeeinfo();
    Officer O1;
    O1.setName("karim");
    O1.setAge(40);
    O1.setBloodgroup("karim");
    O1.setSalary(50000);
    O1.setJoindate("11-12-2013");
    O1.showOfficerinfo();
    Officer O2("karim",40,"O+",50000,"11-12-2013");
    O2.showEmployeeinfo();
    Faculty f1;
    f1.setName("Majid-ul-hauque");
    f1.setAge(28);
    f1.setBloodgroup("O+");
    f1.setSalary(50000);
    f1.setFacultydept("FST");
    f1.showFacultyinfo();
    Faculty f2("Majid-ul-hauque",28,"O+",50000,"FST");
    f2.showFacultyinfo();
    return 0;
}
