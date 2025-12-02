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
    float b=65.0;
    int j;
    // j=b%10; // Error: Modulus operator not applicable for float
    // j=static_cast<int>(b)%10; // Explicit conversion from float to int
    j=(int)b%10; // Explicit conversion from float to int
    cout<<j<<endl;
    return 0;
}