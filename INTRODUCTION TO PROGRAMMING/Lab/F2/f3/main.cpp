#include <iostream>
using namespace std;
int add (int a,int b);
int main()
{
    int c=add(10,20);
    cout<<"Addition:"<<c<<endl;

    return 0;
}

int add (int a,int b )
{
    int c=a+b;
    return c;
}
