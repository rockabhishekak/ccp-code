#include<iostream>
using namespace std;
class abc{
    int l,b;
    public:
    abc()
    {
        l=10;b=20;
    }
    abc(abc &obj)//copy constructor
    {
        l=obj.l;b=obj.b;
    }
    void area()
    {
        cout<<"area of rectagle is : "<<l*b<<endl;
    }
};
int main()
{

    abc a1;
    a1.area();//calling a default constructor
    

}