#include<iostream>
using namespace std;

class Mobileuser
{
public:
    virtual void sendMessage() = 0;

};

// This class inherits from Base and implements fun()
class Rahim: public Mobileuser
{
public:
    void sendMessage()
    { cout << "Hi! This is Rahim"; }
};
class Karim: public Mobileuser
{
public:
    void sendMessage()

    { cout << "\nHi! This is Karim"; }
};

int main(void)
{
   Mobileuser *m1;
   Rahim r1;
   Karim k1;
   m1=&r1;
   m1->sendMessage();
   m1=&k1;
   m1->sendMessage();

    return 0;
}
