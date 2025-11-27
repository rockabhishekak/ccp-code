// You are using GCC
#include<iostream>
//static memory allocated one time.
using namespace std;
void display()
{
    static int a = 10;//without static output are 10,10,10
    cout<<"a = "<<a<<endl;
    a++;
}
int main()
{
    display();
    display();
    display();
    
}
