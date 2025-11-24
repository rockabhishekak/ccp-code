#include<iostream>
using namespace std;
struct book{
    char title[50]="C++";//50
    int noOfPages=1125;//4
    float price=4587.12;//4
    
    
};
int main()
{
    book b1;
//    cout<<"Memory occupied by the object b1 is:"<<sizeof(b1);
	cout<<"Title : "<<b1.title<<endl;
	cout<<"Pages count "<<b1.noOfPages<<endl;
	cout<<"Price :"<<b1.price<<endl;
}
