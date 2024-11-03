#include <iostream>

using namespace std;
class interact
{
protected:
    float data;
public:
    interact()
    {
        cout<<"Empty for interact"<<endl;
    }
    interact(float d)
    {
        data=d;
    }
    void showData()
    {
        cout<<"Data shown"<<endl;
    }
    void showData(int d)
    {
        data=d;
    }
    void showData(char *a)
    {
        cout<<"Overloading function!"<<endl;
    }
};
class intercept:public interact
{
public:
    intercept(float x):interact(x)
    {
        cout<<"Parameterized for child chained"<<endl;
    }
};

int main()
{
    interact i;
    interact i1(29.6);
    i.showData(10);
    i.showData();
    i.showData("IP QUIZ");
    intercept in(10);
    return 0;
}
