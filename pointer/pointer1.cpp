#include <iostream>
using namespace std;

// 1. Call by Value (Original nahi badlega)
void swap_by_Value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    // Yahaan x aur y badal gaye (copy waale)
}

// 2. Call by Address (Pointers ka istemaal)
void swap_by_Address(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    // Original value badal gayi
}

// 3. Call by Reference (Reference ka istemaal)
// Dekhiye syntax kitna clean hai
void swap_by_Reference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    // Original value badal gayi
}

int main() {
    int a = 10, b = 20;

    // --- Call by Value ---
    cout << "--- Call by Value ---" << endl;
    cout << "Before: a=" << a << ", b=" << b << endl; // 10, 20
    swap_by_Value(a, b);
    cout << "After:  a=" << a << ", b=" << b << endl; // 10, 20 (KOI FARK NAHI PADA)

    // Reset values
    a = 10; b = 20;

    // --- Call by Address ---
    cout << "\n--- Call by Address ---" << endl;
    cout << "Before: a=" << a << ", b=" << b << endl; // 10, 20
    swap_by_Address(&a, &b); // Address bhejna padega
    cout << "After:  a=" << a << ", b=" << b << endl; // 20, 10 (BADAL GAYE)

    // Reset values
    a = 10; b = 20;
    
    // --- Call by Reference ---
    cout << "\n--- Call by Reference ---" << endl;
    cout << "Before: a=" << a << ", b=" << b << endl; // 10, 20
    swap_by_Reference(a, b); // Normal tareeke se bheja
    cout << "After:  a=" << a << ", b=" << b << endl; // 20, 10 (BADAL GAYE)

    return 0;
}