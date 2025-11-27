// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<setbase(16)<<a<<endl;///hex
    cout<<setbase(8)<<a<<endl;//hex
    cout<<setbase(10)<<a<<endl;//hex
    cout<<hex<<a<<endl;
}

