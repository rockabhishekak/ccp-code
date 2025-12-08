#include<iostream>
using namespace std;
class B{
    protected:
    int X;
    public:
    void get_dataB(){
        cout<<"Enter value for X: ";
        cin>>X;
        
    }
};
class DB1:public virtual B{
    protected:
    int Y;
    public:
    void get_dataDB1(){
        cout<<"Enter value for Y: ";
        cin>>Y;
    }
};
class DB2:public  virtual B{
    protected:
    int Z;
    public:
    void get_dataDB2(){
        cout<<"Enter value for Z: ";
        cin>>Z;
    }
};
class child:public DB1,public DB2{
    public:
    void display(){
        int sum = X + Y + Z;
        cout<<"Sum of X, Y and Z is: "<<sum<<endl;
    }
};
int main(){
    child c;
    // c.DB1::get_dataB(); // Ambiguity arises here
    c.get_dataB(); // No ambiguity due to virtual inheritance
    c.get_dataDB1();
    c.get_dataDB2();

    c.display();
    return 0;

    
   
}