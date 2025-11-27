#include<iostream>
using namespace std;
struct book{
    char title[50];//50
    int noOfPages;//4
    float price;//4
    
    
};
int main()
{
    book b1;
    cout<<"Memory occupied by the object b1 is:"<<sizeof(b1);
}
