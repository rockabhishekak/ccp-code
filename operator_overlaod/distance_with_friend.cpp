#include<iostream>
using namespace std;
class Distance{
    int meter;
    public:
    Distance(int m=0)
    {
        meter=m;
    }
    friend Distance operator-(Distance d1, Distance d2);
    void display()
    {
        cout<<"Distance: "<<meter<<" meters"<<endl;
    }

};
Distance operator-(Distance d1, Distance d2)
{
    Distance temp;
    temp.meter=d1.meter - d2.meter;
    return temp;
}
int main()
{
    Distance d1(80);
    Distance d2(70);
    Distance d3;
    d3 = d1 - d2; // Using overloaded + operator
    cout<<"sub of two Distance objects done successfully."<<endl;
    cout<<"Program ended successfully."<<endl;
    d3.display();
    return 0;
}