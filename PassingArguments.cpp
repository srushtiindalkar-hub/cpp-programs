#include<iostream>
using namespace std;
class Box
{   
    public:
    int length;
};
    void byValue(int a)
    {
        a = a + 10;
    }
    void byReference(int &a)
    {
        a =  a + 10;
    }
    void byObject(Box b)
    {
        b.length = b.length + 10;
        cout<<" Inside by Object : "<<b.length<<endl;
    }

int main()
{
    int x=5,y=5;
    Box b1;
    b1.length=5;
    byValue(x);
    cout<<" By Value  : "<<x<<endl;
    byReference(y);
    cout<< " By Reference : "<<y<<endl;
    byObject(b1);
    cout<< " By Object : "<<b1.length;
    return 0;
}