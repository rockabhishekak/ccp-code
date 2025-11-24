#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    int &i=a;
    cout<<"Address of a "<<ptr<<" "<<&a<<endl;
    cout<<"value of a using ptr "<<*ptr<<endl;
    int b=20;
    ptr=&b;
    cout<<"Address of a "<<ptr<<" "<<&b<<endl;
    cout<<"value of a using ptr "<<*ptr<<endl;
}