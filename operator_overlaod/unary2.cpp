#include<iostream>
using namespace std;
class Counter{
    private:
    int count;
    public:
    Counter()
    {
        count=0;
    }
    int getCount()
    {
        return count;
    }
    void operator++(int) //prefix increment operator overloading
    {
        count++;
    }
   
    void operator++() //prefix increment operator overloading
    {
        count++;
    }
    
};
int main()
{
    Counter c1;
    cout<<"Initial count: "<<c1.getCount()<<endl;
    c1++;
    cout<<"Count after increment: "<<c1.getCount()<<endl;
    ++c1;
    cout<<"Count after increment: "<<c1.getCount()<<endl;
    return 0;
}