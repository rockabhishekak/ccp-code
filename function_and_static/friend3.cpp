#include<iostream>
using namespace std;
class abc;
class xyz
{
    private:
    int a;
    public:
    void display()
    {
        cin>>a;
        cout<<"A is : "<<a<<endl;
    }
    
    friend abc;

};
class abc{
    private:
    int b;
    public:
    void print(xyz obj)
    {
        cin>>b;
        cout<<"B is : "<<b;
    }


};
int main()
{
    xyz obj;
    abc obj1;
    obj1.print(obj);
}