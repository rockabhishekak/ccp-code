#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("file2.txt");
    char ch;
    while(file.get(ch))
    {
        cout<<ch;
    }
    //i want to know the current position of pointer
    cout<<"Current position of pointer is: ";
    cout<<file.tellg()<<endl;
    //now i want to move the pointer to 5th position
    file.seekg(5);
    cout<<"After moving pointer to 5th position: ";
    
    cout<<file.tellg()<<endl;

    file.close();
}