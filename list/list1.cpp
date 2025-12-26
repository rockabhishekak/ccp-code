#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    int i;
    list<int>::iterator it;
    for(it=li.begin(), i=1; it!=li.end(); it++, i++)
    {
        cout<<"Element "<<i<<": "<<*it<<endl;
    }
}