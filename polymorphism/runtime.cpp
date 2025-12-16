#include<iostream>
using namespace std;
class Base {
public:
    virtual void show() {// using non-virtual function if we don't use virtual keyword
        cout << "Base class show function called." << endl;
    }
};
class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function called." << endl;
    }
};
int main(){
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show(); // Calls Base class show function let banding at run time 
}