#include<iostream>
using namespace std;
class Base {
public:
    void show() {
        cout << "Base class show function called." << endl;
    }
    
};
class Derived : public Base {
public:
    void display() {
        cout << "Derived class show function called." << endl;
    }
    
};
int main() {
    Base* basePtr; // Base class pointer
    Derived derivedObj; // Derived class object
    basePtr = &derivedObj; // Pointing base class pointer to derived class object
    basePtr->show(); // Calling base class function using base class pointer

    return 0;
}
