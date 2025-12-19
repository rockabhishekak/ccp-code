#include<iostream>
using namespace std;
void divide(int a, int b)
{
    if(b==0)
    throw b;
    cout<<a/b;
}
int main()
{
    try{
        divide(10,0);
    }
    catch(int x)
    {
        cout<<"Error: b = "<<x;
    }
    
}