// You are using GCC
#include<iostream>
using namespace std;
class pqr;
class abc{
    private:
    int a = 10;
    int b = 20;
    public:
    void display()
    {
        cout<<"a = "<<a<<" b ="<<b<<endl;
    }
    friend int sum(abc obj,pqr ob);
};
class pqr{
    private:
    int c = 100;
    int d= 200;
    public:
    friend int sum(abc obj,pqr ob);
    void display()
    {
        cout<<"c = "<<c<<" d ="<<d<<endl;
    }
    
};
int sum(abc obj,pqr ob1)
{
    obj.display();
    ob1.display();
    int add;
    add=obj.a+obj.b+ob1.c+ob1.d;
    return(add);
}
int main()
{
    abc obj1; pqr ob2;
    int result;
    result = sum(obj1,ob2);
    cout<<"result = "<<result;
    
}
