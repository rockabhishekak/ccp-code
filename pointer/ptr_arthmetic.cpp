#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    cout<<"Value of ptr"<<ptr<<endl;
    cout<<"Address of a = "<<&a<<endl;
    ptr++;
    cout<<"Value pointed by ptr = "<<*ptr<<endl;

}