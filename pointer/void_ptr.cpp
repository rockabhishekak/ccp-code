#include<iostream>
using namespace std;
int main()
{
    int a=10;
    float b=20.3;
    char c='h';
    void *ptr;//void ptr or generic pointer
    ptr=&a;//void ptr poiting to int
    int p=*(int*)ptr;
    cout<<"Value of a using ptr "<<p<<endl;
    cout<<"Value of a using ptr "<<*(int*)ptr<<endl;
    ptr=&b;
    cout<<"Value of b using ptr "<<*(float*)ptr<<endl; 
    ptr=&c;
    cout<<"Value of c using ptr "<<*(char*)ptr<<endl; 



}