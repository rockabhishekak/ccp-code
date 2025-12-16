#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show()=0;//pure virtual fuctions 

};
class Derived: public Base{
    public:
    void show()
    {
        cout<<"Called Derived class "<<endl;
    }
};
class Derived2: public Base{
    public:
    void show()
    {
        cout<<"Called Derived2 class "<<endl;
    }
};
int main()
{
    Base *ptr[2];
    Derived obj;
    Derived2 obj2;
    ptr[0]=&obj;
    ptr[1]=&obj2;
    ptr[0]->show();
    ptr[1]->show();
}