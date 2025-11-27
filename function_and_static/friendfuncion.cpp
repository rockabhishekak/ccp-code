// You are using GCC
#include<iostream>
using namespace std;
class abc{
    private:
    int a = 10;
    int b = 20;
    public:
    void display()
    {
        cout<<"a = "<<a<<" b "<<b<<endl;
    }
    friend int sum(abc obj);
};
int sum(abc obj)
{
    int add;
    add=obj.a+obj.b;
    return(add);
}
int main()
{
    abc obj1;
    int result;
    result = sum(obj1);
    cout<<"result = "<<result;
    
}
