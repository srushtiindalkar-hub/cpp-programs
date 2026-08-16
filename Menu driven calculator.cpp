#include<iostream>
using namespace std;
int main(){
   int a,b,choice;
   cout<<"Enter value for a : ";
   cin>>a;
   cout<<"Enter value for b : ";
   cin>>b;
   cout<<endl<<" 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division "<<endl<<"Enter your choice : ";
   cin>>choice;
   switch(choice){
      case 1: cout<<"a + b = "<<a+b;
      break;
      case 2: cout<<"a - b = "<<a-b;
      break;
      case 3: cout<<"a * b = "<<a*b;
      break;
      case 4: cout<<"a / b = "<<a/b;
      break;
      default:cout<<"Invalid choice..!";
   }
   return 0;

}