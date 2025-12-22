#include<iostream>
using namespace std;
template<class T>
void sum(T a, T b){
    
    cout << "Sum: " << a+b << endl;
}
int main() {
    sum(5, 10);          // Calling template function with int
    sum(5.5, 10.2);  // Calling template function with double
    sum<char>('a','b');
    sum<string>("Hello, ", "World!"); // Calling template function with string
    return 0;
}