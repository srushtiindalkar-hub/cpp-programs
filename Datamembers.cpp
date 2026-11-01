#include<iostream>
using namespace std;
class Student
{
    int roll;
    float marks;
    public:
    void setValues(int r,float m)
    {
        roll=r;
        marks=m;
    }
    void display()
    {
        cout<< " Roll no : " <<roll<<endl;
        cout<< " Marks   : " <<marks<<endl;
    }
};
int main()
{
        Student s;
        s.setValues(23,45.78);
        s.display();
        return 0;
    
}