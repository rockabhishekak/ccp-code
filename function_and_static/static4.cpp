// You are using GCC
#include<iostream>
using namespace std;
class student
{
//    static int count=0;
    int rollNum;
    string name;
    public:
    void getData()
    {
        cin>>rollNum>>name;
        count ++;
        
    }
    
    void showData()
    {
        
        cout<<"Roll no : "<<rollNum<<endl;
        cout<<"Name : "<<name<<endl;
    }
    void display()
    {
        count<<"Count : "<<count<<endl;
    }
};
int student::count = 0;
int main()
{
    student ob1,ob2;
    ob1.getData();
    ob2.getData();
    ob1.showData();
    ob2.showData();
    ob1.display();
    
}
