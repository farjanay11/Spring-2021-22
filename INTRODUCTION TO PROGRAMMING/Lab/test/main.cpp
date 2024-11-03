#include <iostream>



using namespace std;



class Test
{



public:
    static int x;



    Test()
    {
        cout<<"Empty constructor"<<endl;
        x++;



    }
    void setX(int a)
    {
        x=a;
    }
    int getX()
    {
        return x;
    }
};



int Test::x=0;



int main()
{   Test t1, t2;



    cout<<Test::x<<endl;
    cout<<t1.x<<endl;
    cout<<t2.x<<endl;



    Test t3;
    cout<<t3.x<<endl;






    return 0;
}
