#include<iostream>
using namespace std;
template <typename T, typename U>
void display(T a, U b){
    cout << "First: " << a << ", Second: " << b << endl;
}
int main()
{
    display(5, 10.5);          // Calling template function with int and double
    display('A', "Hello");     // Calling template function with char and string
    display(3.14f, 42);        // Calling template function with float and int
    display("Template", 2024); // Calling template function with string and int
    return 0;
}