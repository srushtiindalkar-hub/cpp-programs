#include<iostream>
using namespace std;
inline int Square(int n)
{
    return n*n;
}
class Rectangle
{
    int l,b;
    public:
    void setData(int x,int y)
    {
        l = x;
        b = y;
    }
     int showArea()
     {
        return l*b;
     }
};
int main()
{
    Rectangle r;
    r.setData(2,7);
    cout<<" Area of rectangle : "<<r.showArea()<<endl;
    cout<<" Square of 5       : "<<Square(5);
    return 0;
}