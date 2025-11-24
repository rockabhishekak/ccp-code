//this function is without return type and without arguments

#include<iostream>
using namespace std;
void sum();
int main()
{
    sum();
}
void sum()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<"sum = "<<num1+num2;
}