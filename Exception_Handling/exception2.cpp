#include<iostream>
using namespace std;
class Error{
    public:
    void show()
    {
        cout<<"Error: Division by zero ";

    }
};
int main()
{
    int a=10,b=0;
    try{
        if(b==0)
        throw Error();
        cout<<a/b;
    }
    catch(Error e)
    {
        e.show();
    }

}