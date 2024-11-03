#include <iostream>

using namespace std;

    int add (int a,int b)
    {
        int c=a+b;
        return c;
    }
    int sub (int a,int b)
    {
        int c=a-b;
        return c;
    }
    int mul (int a,int b)
    {
        int c=a*b;
        return c;
    }
    int division (int a,int b)
    {
        int c=a/b;
        return c;
    }
int main()
{
    int a,b;
    cout<<"Enter number 1:";
    cin>>a;
    cout<<"Enter number 2:";
    cin>>b;
    cout<<"Addition:"<<add(a,b)<<endl;
    cout<<"Subtraction:"<<sub(a,b)<<endl;
    cout<<"Multiplication:"<<mul(a,b)<<endl;
    cout<<"Division:"<<division(a,b)<<endl;

    return 0;
}
