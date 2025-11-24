#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int n1=10,n2=20;
    cout<<"Value before swap n1 = "<<n1<<" n2 = "<<n2<<endl;
    swap(n1,n2);//call by value n1 and n2 are actual argumemt

    cout<<"Value after swap n1 = "<<n1<<" n2 = "<<n2<<endl;
}
void swap(int &a,int &b)//a and b are formal argument
{
    int temp;
    cout<<"in function values before swap a= "<<a<<" b = "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"In function values after swap a = "<<a<<" b = "<<b<<endl;


}
