#include<iostream>
using namespace std;
class abc
{
    private:
    int a,b;
    public:
    abc()
    {
        a=0;
        b=0;
    }
    abc(int x,int y)
    {
        a=x;
        b=y;
    }
    abc operator+(abc obj)
    {
        abc temp;
        temp.a=a +obj.a;
        temp.b=b +obj.b;
        return temp;
    }
    void display()
    {
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
};
int main()
{
    abc obj1(10,20);
    abc obj2(30,40);
    abc obj3(50,60);
    abc obj4;
    obj4 = obj1  + obj2+ obj3; 
    cout<<"Addition of two objects done successfully."<<endl;  
    cout<<"Program ended successfully."<<endl;
    obj4.display();
    
    return 0;
}