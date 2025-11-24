// You are using GCC
#include<iostream>
//static memory allocated one time.
using namespace std;
static int a = 10;//without static output are 10,10,10
void display()
{
 

    a++;
}
int main()
{
    display();
    display();
    display();
    cout<<"a = "<<a<<endl;
}
