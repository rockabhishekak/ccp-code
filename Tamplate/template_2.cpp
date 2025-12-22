#include<iostream>
using namespace std;
template <typename T>
class abc{
    T a,b;
    public:
    abc(T x,T y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a = "<<a<<", b = "<<b<<endl;
    }
};
int main()
{
    abc<int>obj1(5,10);
    obj1.display();
    abc<double>obj2(5.5,10.2);
    obj2.display();
    abc<char>obj3('a','b');
    obj3.display();
    abc<string>obj4("Hello, ","World!");
    obj4.display();
    return 0;
}