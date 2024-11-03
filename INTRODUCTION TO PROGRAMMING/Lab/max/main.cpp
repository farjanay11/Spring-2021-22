#include <iostream>

using namespace std;

int main()
{
    int n;
    float arr[9],lowest,slowest;
    cout<<"Numbers of a students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if (arr[0]>arr[1])
    {
        lowest=arr[0];
        slowest=arr[1];
    }
    else
    {
        lowest=arr[1];
        slowest=arr[0];
    }
    for(int i=2;i<n;i++)
    {
        if (arr[i]>lowest)
        {
            slowest=lowest;
            lowest=arr[i];
        }
        else if(arr[i]>slowest)
        {
            slowest=arr[i];
        }
    }
    cout<<"Highest Mark is:"<<lowest<<endl;
    cout<<"Second Highest Mark is:"<<slowest<<endl;
    return 0;
}
