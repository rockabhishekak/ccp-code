#include<iostream>
using namespace std;
int main()
{
    void *ptr;
    int *ptr1;
    int data=100;
    ptr=&data;
    ptr1=(int *)ptr;
    // ptr1=ptr;//error in this case because without typecasting
    cout<<"The value of *ptr1 is "<<*ptr1;
    return 0;

}