#include<iostream>
using namespace std;
class Shape{// first base class
    int width, height;
    protected:
        int getWidth(){
            cout << "Enter width: ";
            cin >> width;
            return width;
        }
        int getheight(){
            cout << "Enter width: ";
            cin >> height;
            return height;
        }
};
class PaintCost{// second base class
    public:
        int cost(){
            return  (70);
        }
        
};
class Square: public Shape, public PaintCost{// derived class from two base classes is called multiple inheritance
    public:
        int area;
        void getData(){
            int side = getWidth();
            area = side * side;
            int pcost = cost();
            int totalCost = area * pcost;
            cout << "Total paint cost for square: " << totalCost << endl;
        }
        
};
int main(){
    Square obj;
    obj.getData();
    return 0;
}