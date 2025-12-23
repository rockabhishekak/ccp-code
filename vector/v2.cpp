#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1;
    int i;
    for(i=1; i<=5; i++)
    {
        v1.push_back(i*10);
    }
    cout << "Elements in v1: ";
    for(i=0; i<v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}