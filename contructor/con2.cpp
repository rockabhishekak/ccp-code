#include<iostream>
using namespace std;
class rectangle{
    int l,b;
    public:
    rectangle()
    {
        cin>>l>>b;
    }
    rectangle()//paramenterized constructor
    {
        a=l;
        b=b;
    }
    // |
    // ^
    // rectangle(int x,int y):l(x),b(y){};
    void area()
    {
        cout<<"area of rectange is : "<<l*b<<endl;
    }

};
int main()
{
    rectangle r1;
    r1.area();
    // rectangle r2(4,7);
    // r2.area();
}