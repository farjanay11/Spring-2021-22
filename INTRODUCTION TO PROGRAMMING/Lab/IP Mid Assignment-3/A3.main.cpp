#include <iostream>

using namespace std;

int main()
{
   cout<<"Name Farjana Yesmin Opi\nID:22=47918-1"<<endl;
   float a,b;
   char Y,N,c;
   cout<<"Please enter Y:";
   cin>>Y;
   if(Y=='N')
   {
       cout<<"Closes\n";
   }
   cout<<"Please enter an option form these following options(+,-,*,/):";
   cin>>c;
   cout<<"Please enter two numbers:";
   cin>>a>>b;
   switch(c)
   {
   case '+':
    cout<<"Addition:"<<a+b;
    break;
   case '-':
    cout<<"Subtraction:"<<a-b;
    break;
   case '*':
    cout<<"Multiplication:"<<a*b;
    break;
   case '/':
    cout<<"Division:"<<a/b;
    break;
   default:
    cout<<"Invalid Operator";
   }

    return 0;
}
