#include<iostream>
using namespace std;
int main()
{
	

    string str="Hello";
    string str1="World!";
    // string str2 =str+str2;
    // cout<<str2<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    // cout<<str.max_size()<<endl;
    // cout<<str.replace(3,2,"Abc")<<endl;
    // cout<<str.insert(3,"ABC")<<endl;
    // str.erase(1,3);//the 1,3 is ab range for delete
    // str.append(str1); 
    // str.append("Hello");  
    // str.append("!!!!!",2,2);  
    // str.append(str1,2,1);  
    // cout<<str.max_size();
    // cout<<str;
    // cout<<"Empty: "<<(str.empty()?"Yes":"No")<<endl;
    // cout<<str.compare(str1);//s1==s2 giving 0, s1>s2 giving postive and s1<s2 geving negative value;
    string s1("green apple");
    string s2("red apple");
    if(s1.compare(s2)!=0)
    cout<<s1<<" is not "<<s2<<endl;

    if(s1.compare(6,5,"apple")==0)
    cout<<"still "<<s1<<" is an apple\n";
    

    if(s1.compare(6,5,s2,4,5)==0)
    cout<<"Therefore both are apples\n";





	
}