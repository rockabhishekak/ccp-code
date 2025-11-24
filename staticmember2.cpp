#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    float fee;
    string name;
    static int scount;
    public:
    void input()
    {
        cin>>rollno>>fee>>name;
        scount++;
    }
    void display()
    {
        cout<<"Roll number :"<<rollno<<endl;
        cout<<"Fees :"<<fee<<endl;
        cout<<"Name :"<<name<<endl;
        
    }
    void displayCount()
        {
            cout<<"Total Number of students are : "<<scount<<endl;
        }

};
int student::scount=0;
int main()
{
    student obj1,obj2,obj3;
    // cout<<"Size of object : "<<sizeof(obj)<<endl;
    int i;
        obj1.input();
        obj2.input();
        obj3.input();
        obj1.display();
        obj2.display();
        obj3.display();
    


}