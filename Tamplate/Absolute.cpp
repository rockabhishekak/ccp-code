#include<iostream>
using namespace std;
template <class T>
void absolute(T a){
    cout << "Absolute value: " << (a < 0 ? -a : a) << endl;
}
int main() {
    absolute(5);
    absolute(-10);
    return 0;
}