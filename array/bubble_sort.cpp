//bubble short
#include<iostream>
using namespace std;
int main()
{
	int i,n,p,c,temp,j;
	cout<<"Enter the number of Element."<<endl;
	cin>>n;
	cout<<"Enter the element."<<endl;
	int arr[100];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//apply bubble sort
	for(p=0;p<n-1;p++)
    {
        for(c=0;c<n-p-1;c++)
        {
            if(arr[c]>arr[c+1])
            {
                swap(arr[c],arr[c+1]);
            }
        }
    }
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}