#include<iostream>
using namespace std;
class student{
	private:
	int rollno;//DAta members
	float fees;
	string name;
	public:
	void getData()//member of function
	{
		cin>>rollno>>fees>>name;
	}
	void showdata()
	{
		cout<<"Roll no :"<<rollno<<endl;
		cout<<"Fee :"<<fees<<endl;
		cout<<"Name :"<<name<<endl;
	}
};
int main()
{
	
    student obj;//obj is object of class student
    obj.getData();
    obj.showdata();   
	 
}
