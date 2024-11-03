#include <iostream>

using namespace std;

int main()
{
    int rdigit,num;
    cout<<"Enter an Integer Number:";
    cin>>num;
    cout<<"Reverse the Odd Digit Integer:";
    while(num!=0)
    {
        rdigit=num%10;
        if(rdigit%2==0)
        {
            cout<<rdigit;
        }
        num=num/10;
    }
    return 0;
}
