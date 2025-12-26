#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec;
    vector<int>::iterator pos;
    vec.push_back(7); 
    vec.push_back(4);
    vec.push_back(9);
    vec.push_back(2);
    vec.push_back(5);
    cout<<"Original vector elements: ";
    for(pos=vec.begin(); pos!=vec.end(); ++pos)
        cout<<*pos<<" ";
        cout<<endl;
    pos=min_element(vec.begin(), vec.end());//min_element function to find minimum element in vector
    cout<<"Minimum element in vector is: "<<*pos<<endl;
    pos=max_element(vec.begin(), vec.end());//max_element function to find maximum element in vector
    cout<<"Maximum element in vector is: "<<*pos<<endl;
    sort(vec.begin(), vec.end());//sort function to sort the vector
    cout<<"Sorted vector elements: ";
    for(pos=vec.begin(); pos!=vec.end(); ++pos)
        cout<<*pos<<" ";
    cout<<endl;
    //reverse function to reverse the vector
    reverse(vec.begin(), vec.end());
    cout<<"Reversed vector elements: ";
    for(pos=vec.begin(); pos!=vec.end(); ++pos)
        cout<<*pos<<" ";
    cout<<endl;
    
    return 0;
}