// You are using GCC
#include<iostream>
using namespace std;
class student{
    private:
    int rollNum;
    float fee;
    string name; //all 3 are data members.
    public:
    void getData(int p,float q, string r);
    void showData();// members function.
    
}s1; ///S1 is the object of class students.
void student::getData(int p,float q, string r)///definition
{
	rollNum=p; fee=q; name=r;
//    cin>>rollNum>>fee>>name;
    
}
void student::showData()
{
    cout<<"Roll no :"<<rollNum<<endl;
    cout<<"fee :"<<fee<<endl;
    cout<<"Name :"<<name<<endl;
    
}
int main()
{
	int a=10;
	float b= 98000;
	string c= "Abhishek";
    s1.getData(a,b,c);
    s1.showData();
    
}
