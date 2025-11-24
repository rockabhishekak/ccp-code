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
    student obj[3];
    cout<<"Size of object : "<<sizeof(obj)<<endl;
    int i;
    for(i=0;i<3;i++)
    {
        obj[i].input();
        
    }
    for(i=0;i<3;i++)
    {
        obj[i].display();


    }
    for(i=0;i<1;i++)
    {
        obj[i].displayCount();

    }
    


}