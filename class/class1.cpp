#include<iostream>
using namespace std;
class student{
	//empthy
	public:
	int rollno;
	float fees;
	string name;
};
int main()
{
	
    student obj;//obj is object of class student
    cout<<sizeof(obj);
    obj.rollno=10;
    cout<<obj.rollno;
    
}
