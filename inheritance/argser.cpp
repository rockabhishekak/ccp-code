#include<iostream>
using namespace std;
class demo{
    private:
    int a;
    protected:
        int getData(){
        cin >> a;
        return a;
        }
    public:
        int getSquare(int x){
            return x * x;
        }

    
};
class dummy : public demo{ // single inheritance from demo to dummy
    public:
        void accessData(){
            int b=getData(); // Accessing protected member function from base class
            cout<<"Accessed value of a from derived class: " << b << endl;
        }
};
int main(){
    dummy obj;
    obj.accessData();
    obj.getSquare(5); // Accessing public member function from base class
    cout << "Square of 5 is: " << obj.getSquare(5) << endl;
    
    return 0;
}