#include<iostream>
using namespace std;
class demo{
    static int count;
    public:
    demo()//constructor
    {
        count++;
        cout<<"Contructor called count: "<<count<<endl;
    }
    ~demo()//constructor
    {
        count--;
        cout<<"Destructor called count : "<<count<<endl;
    }

};
int demo::count=0;
int main()
{
    demo d1;
    {
        demo d2;

    }
}