// You are using GCC
#include<iostream>
using namespace std;
class Book{
	private:
	string Title;//DAta members
	string authorname;
	int price;
	int ISBN;
	int p;
	public:
	void getData()//member of function
	{
		cin>>Title>>authorname>>price>>ISBN>>p;
//		cin>>Title>>authorname>>price>>ISBN>>p;
	}
	void showdata()
	{
		cout<<"Title:"<<Title<<endl;
		cout<<"Authorname :"<<authorname<<endl;
		cout<<"Price :"<<price<<endl;
		cout<<"ISBN NO  :"<<ISBN<<endl;
		cout<<"No of page :"<<p<<endl;
	}
};
int main()
{
	
    Book obj;//obj is object of class student
    obj.getData();
    obj.showdata();   
	 
}
