#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char filename[100]; string str;
    cout<<"Enter the filename to be created with extension"<<endl;
    cin>>filename;
    ofstream fout(filename);
    fout<<"This is the first file.\n";
    fout.close();
    cout<<"File "<<filename<<" created and data written successfully"<<endl;
    ifstream fin(filename);
    getline(fin,str);
    fin.close();
    ofstream fout2("copyfile.txt");
    fout2<<str;
    fout2.close();
    cout<<"Data copied to copyfile.txt successfully"<<endl;
    return 0;
    

}