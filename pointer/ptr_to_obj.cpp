#include<iostream>
using namespace std;
class demo{
    public:
    int a;
    void print()
    {
        cout<<"a = "<<a<<endl;

    }
};
int main()
{
    demo d, *dptr;// dptr is pointer to class
    dptr = &d;//ptr to object
    cin>>d.a;
    d.print();
    cin>>dptr->a;
    dptr->print();
}