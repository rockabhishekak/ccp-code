#include<iostream>
using namespace std;
int x=10;
int main()
{

    {
        int x=100;
        cout<<x<<endl;
    }
    cout<<x<<endl;
}