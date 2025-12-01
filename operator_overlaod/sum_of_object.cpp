#include<iostream>
using namespace std;
class Box {
   public:
    double length;
    double breadth;
    double height;

    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}

    // Overload + operator to add two Box objects
    Box operator+(Box obj) {
        return Box(length + obj.length, breadth + obj.breadth, height + obj.height);
    }

    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }
};
int main() {
    Box box1(2.0, 3.0, 4.0);
    Box box2(5.0, 6.0, 7.0);

    Box box3 = box1 + box2; // Using overloaded + operator

    cout << "Box 1: ";
    box1.display();
    cout << "Box 2: ";
    box2.display();
    cout << "Box 3 (Sum of Box 1 and Box 2): ";
    box3.display();

    return 0;
}