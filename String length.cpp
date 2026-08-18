#include<iostream>
using namespace std;
class Solution{
    public:
    int findLength(string s){
        return s.length();
    }
};
int main(){
    Solution obj;
    string s; 
    cout<<"Enter Your String  : ";
    cin>>s;
    cout<<endl;
    cout<<obj.findLength(s);
return 0;
}