#include<iostream>

using namespace std;

class adder

{

    public:

    virtual void addnum()=0;

};

class dd:public adder

{

    public:

    void addnum()

    {

        cout<<"pure virtual function is called"<<endl;

    }

};



int main()

{

    dd d;

    d.addnum();

    return 0;

}
