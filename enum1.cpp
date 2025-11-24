#include<iostream>
using namespace std;
int main()
{
//	enum days{sun,mon,tues,wed,thurs,fri,sat};
	enum days{sun=10,mon,tues,wed,thurs,fri,sat};
	days day1,day2;//day1 and day2 are the variable of type days
	day1=sun;
	day2=thurs;
//	cout<<"Sun = "<<day2;
	if(day1<day2)
	{
		cout<<"Happy";
	}
}
