#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l)
{
    list<int>::iterator it;
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    list<int> li;
    li.push_back(80);
    li.push_back(20);
    li.push_back(500);
    list<int> li2;
    li2.push_back(700);
    li2.push_back(900);
    li2.push_back(1000);
    li.merge(li2); // Merge li2 into li
    cout<<"merged list: ";
    display(li);
    cout<<"Elements in the list: ";
    display(li);
    list<int>::iterator it = li.begin();
    advance(it, 1); // Move iterator to the second element
    li.sort(); // Sort the list
    cout<<"\nElements after sorting: ";
    display(li);
    li.reverse(); // Reverse the list
    cout<<"\nElements after reversing: ";
    display(li);
    return 0;
}