#include <iostream>

using namespace std;

int main()
{
    int arr[3],count,i,lowest_num;
    cout<< "Number of students:"<<endl;
    cin>>count;
    cout<<count<<endl;
    for(i=0;i<count;i++){
            cin>>arr[i];}
    lowest_num=arr[0];
    for(i=0;i<count;i++)
    {
        if(arr[i]<lowest_num)
        {
            lowest_num=arr[i];
        }
    }
    cout<< "Lowest Number:"<<lowest_num;


    return 0;
}
