#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex()
    {
        real=10;
        img=3;
    }
    complex(int a,int b)
    {
        real=a;
        img=b;
    }
    complex(complex &b)
    {
        real=b.real;
        img=b.img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i\n";
    }
    ~complex()
    {
        cout<<"\nobject is destructed.\n";
    }
};
int main()
{
    complex A;
    cout<<"The first complex no. is: ";
    A.display();
    complex B(5,6);
    cout<<"The second complex no. is: ";
    B.display();
    complex C=A;
    cout<<"The third complex no. is: ";
    C.display();
    return 0;
}
