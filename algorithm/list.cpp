#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
bool twice(int elem1, int elem2)
{
    return elem1 == 2 * elem2;
}
int main()
{
    list<int> lst;
    list<int>::iterator it;
    list<int>::iterator result1, result2;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(40);
    lst.push_back(80);
    cout<<"List elements are: ";
    for(it = lst.begin(); it != lst.end(); it++)
        cout << *it << " ";
    cout << endl;
    result1 = adjacent_find(lst.begin(), lst.end(), twice);//adjacent_find to find first pair where second is twice the first
    if(result1 != lst.end())
        cout << "First pair where second is twice the first: " << *result1 << " and " << *(++result1) << endl;
    else
        cout << "No adjacent elements found where second is twice the first." << endl;
    lst.push_back(160);
    result2 = adjacent_find(lst.begin(), lst.end(), twice);//adjacent_find again after
    if(result2 != lst.end())
        cout << "First pair where second is twice the first after adding 160: " << *result2 << " and " << *(++result2) << endl;
    else
        cout << "No adjacent elements found where second is twice the first after adding 160." << endl;
    return 0;
    
    
}