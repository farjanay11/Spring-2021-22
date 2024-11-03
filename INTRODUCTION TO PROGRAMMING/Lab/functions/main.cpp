#include <iostream>

using namespace std;

int main()
{

int x=5;
int y=10;
int *p;
int *q;
p=&x;
q=&y;
int sum=*p + *q;

cout<<x<<endl;
cout<<&x<<endl;
cout<<p<<endl;
cout<<*p<<endl;
cout<<sum<<endl;



    return 0;
}
