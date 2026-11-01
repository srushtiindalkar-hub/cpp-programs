#include<iostream>
using namespace std;
class Base
{
    private:                //Private Access Specifier//
    int a;
    protected:              //Protected Access Specifier//
    int b;
    public:                 //Public Access Specifier//
    int c;
    void setValues()
    {
        a = 10;
        b = 20;
        c = 30;
    }
    void showA()
    {
        cout<< " Private A = " << a << endl;
    }
};
class Derived : public Base
{
    public:
    void showB()
    {
        cout<< " Protected B = " << b << endl;
    }
};
int main()
{
    Derived d;
    d.setValues();
    d.showA();
    d.showB();
    cout<< " Public C = " <<d.c<<endl;
    return 0;
}