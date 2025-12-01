


#include<iostream>
using namespace std;
class abc{
    public:
    int a;
    abc()
    {a=0;}
    abc(int x)
    {a=x;}
    void operator-() //prefix decrement operator overloading
    {
        a=-a;
    }
    void display()
    {
        cout<<"the value of a is :"<<a<<endl;
    }


 };
int main()
{
    abc obj1;
    obj1.display();
    abc obj2(10);
    obj2.display();
    // abc obj3(-20);
    // obj3.display();
    -obj2; //using overloaded - operator
    cout<<"after applying prefix decrement operator on obj2:"<<endl;
    obj2.display();
    return 0;


}