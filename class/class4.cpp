// You are using GCC
#include<iostream>
using namespace std;
class student{
    private:
    int rollNum;
    float fee;
    string name; //all 3 are data members.
     public:
    void getData();
    void showData();// members function.
    
}s1; ///S1 is the object of class students.
void student::getData()///definition
{
    cin>>rollNum>>fee>>name;
    
}
void student::showData()
{
    cout<<"Roll no :"<<rollNum<<endl;
    cout<<"fee :"<<fee<<endl;
    cout<<"Name :"<<name<<endl;
    
}
int main()
{
//    s1.rollNum=10;
    // s1.name="Abhishek";
    // s1.fee=15.02;
    s1.getData();
    s1.showData();
    
}
