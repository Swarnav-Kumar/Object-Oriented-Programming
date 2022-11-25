#include<iostream>
using namespace std;

class count
{
    int c;
    static int d;
    public:
    count()
    {
        c=++d;
    }
    ~count()
    {
        --d;
    }
    void objno()
    {
        cout<<"Obj Number:"<<c<<"\n";
    }
    static void objcount()
    {
        cout<<"Count:"<<d<<"\n";
    }
};
int count::d;
int main()
{
    count c1,c2;
    count::objcount();
    count c3;
    count::objcount();

    c1.objno();
    c2.objno();
    c3.objno();
    return 0;
}
