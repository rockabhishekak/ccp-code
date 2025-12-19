#include<iostream>
using namespace std;
int main()
{
    try{
        int num1,num2;
        cin>>num1>>num2;
        if(num2!=0)
        cout<<"Divivsion: "<<num1/num2;
        else
        throw 1;
    }
    catch(int i)
    {
        cout<<"Error can't divide by zero.";
    }
    catch(char i)
    {
        cout<<"Error can't  use zero for num2 .";
    }
    catch(...)// handle any unknown exception
    {
        cout<<"pls try inters number";

    }
    return 0;

    
    
}