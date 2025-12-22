#include<iostream>
using namespace std;
template<class T>
T minium(T a, T b){
    return (a < b ? a : b);
    
}
int main() {
    int a=minium(5, 10);          // Calling template function with int
    double b=minium(5.5, 10.2);  // Calling template function with double
    char c=minium<char>('a','b');
    string d=minium<string>("Hello, ", "World!"); // Calling template function with string
    cout<<"Minimum int: "<<a<<endl;
    cout<<"Minimum double: "<<b<<endl; 
    cout<<"Minimum char: "<<c<<endl;
    cout<<"Minimum string: "<<d<<endl;
    return 0;
}