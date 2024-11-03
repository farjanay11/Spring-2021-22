#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1=6;
    int num2=4;
    int *p1,*p2;
    p1=&num1;
    p2=&num2;
    int sum=*p1+*p2;
    cout<<"Sum:"<<sum<<endl;
    cout<<"Address of num1:"<<p1<<endl;
    cout<<"Address of num2:"<<p2<<endl;


    return 0;
}
