#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
public:
    time() : hours(0), minutes(0) {}    
    time(int h, int m) : hours(h), minutes(m) {}
    void display()
    {
        cout << "Hours: " <<hours <<endl;
    }
    // Conversion function to convert time to int
    operator int()
    {
        return hours * 60 + minutes;
    }
};
int main()
{
    time t(2, 30); // 2 hours and 30 minutes
    int totalMinutes = t; // Implicit conversion from time to int
    cout << "Total Minutes: " << totalMinutes << endl;
    return 0;
}