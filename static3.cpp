// You are using GCC
#include<iostream>
//static memory allocated one time.
using namespace std;
static int a;//static is always intily by 0
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
