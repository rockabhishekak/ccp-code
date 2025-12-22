#include<iostream>
using namespace std;
template <typename T>
bool search(T arr[],int size,T key)
{
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main()
{
    const int size=12;
    int arr[size]={1,2,3,4,5,6,7,8,9,10,11,12};
    int key=10;
    cout<<"Searching in integer array: "<<search(arr,size,key)<<endl;
    double darr[size]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1,11.11,12.12};
    double dkey=7.7;   
    cout<<"Searching in double array: "<<search(darr,size,dkey)<<endl;
    char carr[size]={'a','b','c','d','e','f','g','h','i','j','k','l'};
    char ckey='e'; 
    cout<<"Searching in char array: "<<search(carr,size,ckey)<<endl;
    string sarr[size]={"apple","banana","cherry","date","elderberry","fig","grape","honeydew","kiwi","lemon","mango","nectarine"};
    string skey="kii";
    cout<<"Searching in string array: "<<search(sarr,size,skey)<<endl;
    return 0;
    
}