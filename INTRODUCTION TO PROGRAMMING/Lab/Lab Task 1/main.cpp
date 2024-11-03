#include <iostream>

using namespace std;
float add(float a,float b)
{
    float add=a+b;
    return add;
}
float sub(float a,float b)
{
    float sub=a-b;
    return sub;
}
float multi (float a,float b)
{
    float multi=a*b;
    return a*b;
}

float div (float a,float b)
{
    float div=a/b;
    return div;
}

void arrS(int arr[5])
 {
    for(int i=0;i<5;i++)
{
        arr[i]=arr[i]*arr[i];
        cout<<arr[i]<<endl;
}
 }

int main()
{
    float a,b;
    cout<<"Enter two float numbers:";
    cin>>a>>b;
    cout<<"Addition:"<<add(a,b)<<endl;
    cout<<"Subtraction:"<<sub(a,b)<<endl;
    cout<<"Multiplication:"<<multi(a,b)<<endl;
    cout<<"Division:"<<div(a,b)<<endl;
    int arr[5]={4,7,0,1,8};
    arrS(arr);
    return 0;
}
