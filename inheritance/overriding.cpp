#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(){// function overriding using virtual function// late binding
        cout<<"Base class show function called"<<endl;
    }
};
class Derived:public Base{
    public:
    void show(){
        cout<<"Derived class show function called"<<endl;
    }
};
int main(){
    // Derived d;
    // d.show(); // Calls Derived class show function
    // d.Base::show(); // Calls Base class show function

    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show(); // Calls Base class show function due to early binding// use virtual function to achieve late binding
    return 0;
}