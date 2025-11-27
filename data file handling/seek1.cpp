#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    // ofstream fout("seek1.txt");
    // cout<<"Enter data to be written to file"<<endl;
    // fout<<"Hello World";
    // cout<<fout.tellp()<<endl;
    // fout.seekp(4,ios::beg);//default ios::beg
    // cout<<fout.tellp()<<endl;
    // fout.close();
    // ifstream fin("seek1.txt");
    // fin.seekg(4,ios::beg);
    // fin.get(ch);
    // cout<<"Character at 5th position is "<<ch<<endl;
    // cout<<"data written to file successfully"<<endl;



//------------------------------------------------------------------------//
    string str;
    fstream fout("seek1.txt",ios::in|ios::out);
    cout<<"Enter data to be written to file"<<endl;
    fout<<"Hello World";
    cout<<fout.tellp()<<endl;
    fout.seekp(4,ios::beg);//default ios::beg
    cout<<fout.tellp()<<endl;
    fout.get(ch);
    cout<<"Character at 5th position is "<<ch<<endl;
    fout.seekp(4,ios::cur);//default ios::beg
    cout<<"Updated : "<<fout.tellp()<<endl;
    fout.seekg(4);
    ch='x';
    // fout.get(ch);
    fout.put(ch);
    fout.seekp(0);
    getline(fout,str);
    cout<<str<<endl;
    cout<<"data written to file successfully"<<endl;
    fout.close();

    return 0;
}