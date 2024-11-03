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
    void showid()
    {
        cout<<"Id :"<<id<<endl;
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
         cout<<"\nGraduate student information: "<<endl;
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
        Employee::showEmployeeinfo();
        cout<<"Department: "<<facdept<<endl;
    }
};
class TeachingAssistant:public Student,public Faculty
{
    private:
    string type;
    public:
    TeachingAssistant()
    {

    }
    TeachingAssistant(string name,int age,string bloodgroup,double salary,string facdept,string id,string type):Student(name,age,bloodgroup,id),Faculty(name,age,bloodgroup,salary,facdept)
    {
        this->type=type;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getType()
    {
        return type;
    }
    void showTeachingassistantinfo()
    {
        Faculty::showFacultyinfo();
        Student::showid();
        cout<<"Type: "<<type<<endl;
    }
};


int main()
{
    cout<<"\nStudent information through empty constructor : "<<endl;
    Student s1;
    s1.setName("Tishat");
    s1.setAge(21);
    s1.setBloodgroup("A+");
    s1.setId("22-47019-1");
    s1.showStudentinfo();
    cout<<"\nStudent information through parameterized constructor: "<<endl;
    Student s2("Tishat",21,"A+","22-47019-1");
    s2.showStudentinfo();
    cout<<"\nGraduate Student information through parameterized constructor: "<<endl;
    Graduatestudent g1;
    g1.setName("Tishat");
    g1.setAge(34);
    g1.setBloodgroup("A+");
    g1.setId("222222");
    g1.setGradyear(2020);
    g1.showGradstudent();
    cout<<"Graduate Student information through parameterized constructor: "<<endl;
    Graduatestudent g2("Towsif",25,"A+","17-12345-1",2020);
    g2.showGradstudent();
    cout<<"\nEmployee information through empty constructor : "<<endl;
    Employee E1;
    E1.setName("Rahim");
    E1.setAge(35);
    E1.setBloodgroup("O+");
    E1.setSalary(30000);
    E1.showEmployeeinfo();
    cout<<"\nEmployee information through parameterized constructor : "<<endl;
    Employee E2("Rahim",35,"B+",30000);
    E1.showEmployeeinfo();
    cout<<"\nOfficer information through empty constructor: "<<endl;
    Officer O1;
    O1.setName("karim");
    O1.setAge(40);
    O1.setBloodgroup("karim");
    O1.setSalary(50000);
    O1.setJoindate("11-12-2013");
    O1.showOfficerinfo();
    cout<<"\nOfficer information through parameterized constructor: "<<endl;
    Officer O2("Karim",40,"O+",50000,"15-123456-1");
    O2.showOfficerinfo();
    cout<<"\nFaculty information: through empty constructor: "<<endl;
    Faculty f1;
    f1.setName("Rahim");
    f1.setAge(35);
    f1.setBloodgroup("O+");
    f1.setSalary(30000);
    f1.showFacultyinfo();
    f1.setFacultydept("FST");
    cout<<"\nFaculty information: through parameterized constructor: "<<endl;
    Faculty f2("Mazid-ul-hauque",28,"A+",50000,"FST");
    f2.showFacultyinfo();
    cout<<"\nTeaching assistant information through empty constructor: "<<endl;
    TeachingAssistant t1;
    t1.Faculty::setName("Rabab");
    t1.Faculty::setAge(35);
    t1.Faculty::setBloodgroup("O+");
    t1.Faculty::setSalary(30000);
    t1.Faculty::setFacultydept("FST");
    t1.Student::setId("21-123456-1");
    t1.setType("Full time");
    t1.showTeachingassistantinfo();
    cout<<"\nTeaching assistant information through parameterized constructor: "<<endl;
    TeachingAssistant t3("Rabab",34,"O+",40000,"fst","21-123456-1","full time");
    t3.showTeachingassistantinfo();
    return 0;
}

