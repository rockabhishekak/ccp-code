#include<iostream>
using namespace std;
int main()
{
    char c = 'A';
    cout<<int(c)<<endl; // Convert char to int
    int i = 66;
    cout<<char(i)<<endl; // Convert int to char
    float f = 5.5;
    cout<<int(f)<<endl; // Convert float to int
    double d = 9.99;
    cout<<float(d)<<endl; // Convert double to float
    int a;
    a=f; // Implicit conversion from float to int
    cout<<a<<endl;
    return 0;
}