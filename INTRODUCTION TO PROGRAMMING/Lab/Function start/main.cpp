#include <iostream>

using namespace std;
int add (int a,int b)
{   int add=a+b;
    return add;
}
int sub (int a,int b)
{
    int sub=a-b;
    return sub;
}
int multi (int a,int b)
{
    int multi=a*b;
    return multi;
}
int divi(int a,int b)
{
    int divi=a/b;
    return divi;
}
int main()
{   int a,b;
    cout<<"Enter Two Numbers:";
    cin>>a>>b;
    cout<<"Addition:"<<add<<endl;
    cout<<"Subtraction:"<<sub<<endl;
    cout<<"Multiplication:"<<multi<<endl;
    cout<<"Division:"<<divi<<endl;



    return 0;
}
