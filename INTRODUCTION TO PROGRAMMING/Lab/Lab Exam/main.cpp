#include <iostream>

using namespace std;

int main()
{
    float cgpa;
    int grade,cdrop;
    cout<<"CGPA:";
    cin>>cgpa;
    cout<<"Number of Grade lower than B:";
    cin>>grade;
    cout<<"Number of Course Drop:";
    cin>>cdrop;
    if (cgpa>=3.75 && cgpa<=3.84 && grade==0 && cdrop==0)
        cout<<"You are Applicable for Bronze Medal";
    else if(cgpa>=3.85 && cgpa<=3.94 && grade==0 && cdrop==0)
        cout<<"You are Applicable for Silver Medal";
    else if(cgpa>=3.95 && cgpa<=4.00 && grade==0 && cdrop==0)
        cout<<"You are Applicable for Gold Medal";
    else
        cout<<"You are not Applicable for Academic awards";
    return 0;
}
