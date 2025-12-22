#include<iostream>
using namespace std;
template<class T>
void minium(T a, T b){
    cout << "Minimum: " << (a < b ? a : b) << endl;
    // if(a<b){
    //     cout << "Minimum: " << a << endl;
    // }
    // else{
    //     cout << "Minimum: " << b << endl;
    // }
}
int main() {
    minium(5, 10);          // Calling template function with int
    minium(5.5, 10.2);  // Calling template function with double
    minium<char>('a','b');
    minium<string>("Hello, ", "World!"); // Calling template function with string
    return 0;
}