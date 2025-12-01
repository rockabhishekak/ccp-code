#include<iostream>
using namespace std;
class sum{
    public:
    int b,a;
    sum()//constructor
    {
        b=50;
    }
    void setdata()
    {
        cout<<"enter the value of a:"<<endl;
        cin>>a;
    }
    int operator+(sum obj)//operator overloading
    {
        return (a+obj.b);
    }
};
int main()
{
    sum obj1,obj2;
    obj1.setdata();
    int result=obj1+obj2;//using overloaded + operator
    cout<<"the sum is :"<<result<<endl;
    return 0;
}