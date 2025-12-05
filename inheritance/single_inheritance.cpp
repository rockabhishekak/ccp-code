//constructor and destructor is not inherited
#include<iostream>
using namespace std;
class demo{
    private:
        int a;
    protected:
        demo()
        {
            cout<<"Base class constructor called."<<endl;
        }
        ~demo()
        {
            cout<<"Base class destructor called."<<endl;
        }
    
};
class dummy : public demo{ // single inheritance from demo to 
    public:
        dummy()
        {
            cout<<"Derived class constructor called."<<endl;
        }
        ~dummy()
        {
            cout<<"Derived class destructor called."<<endl;
        }
};
int main(){
    dummy obj;
    return 0;
}