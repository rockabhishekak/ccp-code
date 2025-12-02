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
        cout << "Hours: " << hours << ", Minutes: " << minutes << endl;
    }
    // Conversion constructor to convert int to time
    time(int totalMinutes)
    {
        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
    }
};
int main()
{
    int totalMinutes;
    cin>>totalMinutes;
    time t = totalMinutes; // Implicit conversion from int to time
    t.display();
    return 0;
}