#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> myvector;
    int sum(0);
    myvector.push_back(100);
    myvector.push_back(200);
    myvector.push_back(300);
    for(int i = 0; i < myvector.size(); i++)
    {
       cout << myvector[i] << endl;
    }
    while(!myvector.empty())
    {
        sum += myvector.back();
        myvector.pop_back();
    }
    cout << "Sum: " << sum << endl;
    myvector.push_back(400);
    myvector.push_back(500);
    for(int i = 0; i < myvector.size(); i++)
    {
       cout << myvector[i] << endl;
    }
    if(myvector.empty())
    {
        cout << "Vector is empty now." << endl;
    }
    else
    {
        cout << "Vector is not empty." << endl;
    }
    return 0;
}