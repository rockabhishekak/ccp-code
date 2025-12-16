#include<iostream>
using namespace std;
int main()
{
    int arr[100],position,index;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cin>>position;
    if(position<1 || position>5)    
    {
        cout<<"Invalid position"<<endl;
        return 0;
    }   
    for(index=4;index>=position-1;index--)
    {
        arr[index+1]=arr[index];
    }
    arr[position-1]=0; // Assuming we want to insert 0 at the given position
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}