#include <iostream>

using namespace std;

int main()
{
    cout<<"Name:Farjana Yesmin Opi"<<endl;
    cout<<"ID:22-47028-1"<<endl;
    cout<<"Please enter five ages:";
    int age[5];
    int sum=0;
    float avg;
    for(int i=0;i<5;i++)
    {
        cin>>age[i];
        sum=sum+age[i];
    }
    avg=(float)sum/5;
    cout<<"The average age is:"<<avg<<endl;
    if(sum%2==0)
        cout<<"The sum of the ages is even"<<endl;
    else
        cout<<"The sum of the ages is odd";
    return 0;
}
