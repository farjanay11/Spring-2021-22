#include <iostream>

using namespace std;

int main()
{
    cout<<"Name:Farjana Yesmin Opi"<<endl;
    cout<<"ID:22-47018-1"<<endl;

    int i,birth_year,current_year=2022,count=0;
    cout<<"Please enter your birth year:";
    cin>>birth_year;
    for(i=birth_year;i<=current_year;i++)
    {
        if((i%4==0 && i%100!=0) || i%400==0)
        {
            count++;
        }
    }

    cout<<"The number of leap years since my birthday is:"<<count;


    return 0;
}
