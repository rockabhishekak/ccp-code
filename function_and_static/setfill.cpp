// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
//the setfill manipulator function is used to specify a different character to fill the 
int main()
{
    string a;
    cin>>a;
    cout<<setfill('*')<<setw(10)<<a<<endl;
    
}

