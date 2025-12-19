#include<iostream>
#include<exception>
using namespace std;
void myFucntion()
{
    try{
        int a=10,b=20;
        cout<<"Sum= "<<a+b<<endl;
        throw "Hello"; //throw a char*
    }
    catch(const char*)//catch a char *
    {
        cout<<"Caught char * inside myFunction\n";
        throw; //rethrow char * outside the function
        // myFuction
    }
}
int main()
{
    cout<<"Start\n";
    try{
        myFucntion();
        
    }
    catch(exception e)
    {
        cout<<"Exception caught: "<<e.what()<<endl;
    }
    catch(char const*)
    {
        cout<<"Error : "<<endl;
    }
    cout<<"End";
    return 0;

}