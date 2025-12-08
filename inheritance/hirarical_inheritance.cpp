#include<iostream>
using namespace std;
class Parent{
    protected:
    int side;
    public:
    void GetA(){
        cin>>side;
        cout<<"side: "<<side<<endl;
    }
};
class child1:public Parent{
    public:
    void getSide()
    {
        cout<<"Area of square: "<<side*side<<endl;
    }
};
class child2:public Parent{
    public:
    void getSide()
    {
        cout<<"Perimeter of square: "<<4*side<<endl;
    }
};
int main(){
    child1 c1;
    c1.GetA();
    c1.getSide();
    child2 c2;
    c2.GetA();
    c2.getSide();
    return 0;
}
