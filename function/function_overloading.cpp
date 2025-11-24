#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int sum(int a,double b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    int result;
    double result1;
    result=sum(10,40.25);
    result1=sum(10.99,20);
    // result1=sum(100,200,500);
    cout<<result<<endl;
    cout<<result1<<endl;
}