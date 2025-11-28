#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char filename[100];
    cout<<"Enter the filename to be created with extension"<<endl;
    cin>>filename;
    ofstream fout(filename);
    fout<<"Hello world, this is a user defined filename.";
    fout.close();
    cout<<"File "<<filename<<" created and data written successfully"<<endl;
    return 0;
}