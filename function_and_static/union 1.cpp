#include<iostream>
using namespace std;
union book{
    char title[50];//50
    int noOfPages;//4
    float price;//4
    
    
};
int main()
{
    book b1;
    cin>>b1.title;
    cout<<"Title : "<<b1.title<<endl;
    cin>>b1.noOfPages;
    cout<<"Pages count "<<b1.noOfPages<<endl;
    cin>>b1.price;
    cout<<"Price :"<<b1.price<<endl;
    cout<<"Memory occupied by the object b1 is:"<<sizeof(b1)<<endl;
}
    
	
	
