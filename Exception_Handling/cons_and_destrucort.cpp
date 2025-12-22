#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a, b;
    try{
        cin>>a>>b;
        if(isdigit(a) && isdigit(b)){
            int result = a+b;
            cout<<result;
        }
        else 
        throw 1;
        
    }
    catch(int i)
    {
        cout<<"error";
    }
}