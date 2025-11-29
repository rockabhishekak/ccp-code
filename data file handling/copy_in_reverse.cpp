#include<iostream>

#include<fstream>
using namespace std;
int main()
{
    char filename[100]; string str;
    cout<<"Enter the filename to be created with extension"<<endl;
    cin>>filename;
    ofstream fout(filename);
    fout<<"Hello Abhishek\n";
    fout.close();
    cout<<"File "<<filename<<" created and data written successfully"<<endl;
    ifstream fin(filename);
    getline(fin,str);
    fin.close();
    ofstream fout2("copyfile2.txt");
    for(int i=str.length()-1;i>=0;i--)
    {
        fout2<<str[i];
    }
    fout2.close();
    cout<<"Data copied in reverse order to copyfile2.txt successfully"<<endl;
    
    return 0;
}