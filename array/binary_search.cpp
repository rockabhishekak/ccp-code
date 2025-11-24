#include<iostream>
using namespace std;
int main()
{
    int arr[7]={10,13,15,19,21,25,29};
    int beg,mid,end,searchElement;
    beg=0;
    end=6;
    cin>>searchElement;
    bool found=false;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==searchElement)
        {
            found=true;
            cout<<"Element found at position : "<<mid+1;
            break;
        }
        else if(searchElement>arr[mid])
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if(!found)
    {
        cout<<"Not found.";
    }


}
