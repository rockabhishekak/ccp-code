#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    vector<int> v(arr,arr+4); // Initialize vector with first 4 elements of array
    while(!v.empty())
    {
        cout << v.back() << endl; // Print the last element
        v.pop_back(); // Remove the last element
    }
}