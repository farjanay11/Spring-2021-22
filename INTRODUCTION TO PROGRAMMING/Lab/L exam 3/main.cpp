#include <iostream>

using namespace std;

int main()
{
    int a;
    float b[10],highest,shighest;
    cout<<"Number of Students:";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    if (b[0]>b[1])
    {
        highest=b[0];
        shighest=b[1];
    }
    else
    {
        highest=b[1];
        shighest=b[0];
    }
    for(int i=2;i<a;i++)
    {
        if (b[i]>highest)
        {
            shighest=highest;
            highest=b[i];
        }
        else if(b[i]>highest)
        {
            shighest=b[i];
        }
    }
    cout<<"Highest Mark is:"<<highest<<endl;
    cout<<"Second Highest Mark is:"<<shighest;

    return 0;
}
