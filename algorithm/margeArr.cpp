#include<iostream>
#include<algorithm>
using namespace std;
int arr1[]={100,20,30,40,50};
int arr2[]={550,15,25,35,45};
int main()
{
    int dest[10];
    merge(arr1,arr1+5,arr2,arr2+5,dest);//merge function to merge two sorted arrays arr1 and arr2 into dest
    cout<<"Merged array is: ";
    for(int i=0;i<10;i++)
        cout<<dest[i]<<" ";
    cout<<endl;
    sort(dest,dest+10);//sort function to sort the array dest
    cout<<"Sorted merged array is: ";
    for(int i=0;i<10;i++)
        cout<<dest[i]<<" ";
    cout<<endl;
    //min_element and max_element functions to find minimum and maximum elements in dest
    int *minPtr=min_element(dest,dest+10);
    int *maxPtr=max_element(dest,dest+10);
    cout<<"Minimum element in merged array is: "<<*minPtr<<endl;
    cout<<"Maximum element in merged array is: "<<*maxPtr<<endl;
    
    return 0;
}