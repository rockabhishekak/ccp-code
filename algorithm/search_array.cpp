#include<iostream>
#include<algorithm>
using namespace std;
int arr[]={10,20,30,40,50,60,70,40,20,25,14,40};
int main()
{
    int n,search;
    cout<<"Enter number of elements in array: ";
    cin>>search;
    n=count(arr,arr+12,search);//count function to count occurrences of search in array arr
    cout<<"Number of times "<<search<<" occurs in array is: "<<n<<endl;
    int *ptr=find(arr,arr+12,search);//find function to locate first occurrence of search in array arr
    if(ptr!=arr+12)
        cout<<search<<" found at position: "<<(ptr-arr)+1<<endl;
    else
        cout<<search<<" not found in array"<<endl;
    return 0;
}