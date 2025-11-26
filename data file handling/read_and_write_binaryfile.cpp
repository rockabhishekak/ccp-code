#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
const char *filename="binaryfile.txt";
int main()
{
    float height[4]={5.9,6.1,5.6,5.8};
    //writing binary file
    ofstream outfile;
    outfile.open(filename);
    outfile.write((char*)height,sizeof(height));
    outfile.close();
    // reading binary file
    for(int i=0;i<4;i++)
    {
        height[i]=0;
    }
    ifstream infile;
    infile.open(filename);
    infile.read((char*)height,sizeof(height));
    cout<<"Height values read from binary file are: "<<endl;
    for(int i=0;i<4;i++)
    {
        cout.setf(ios::showpoint);//this line is optional
        cout<<fixed<<setw(20)<<setprecision(1)<<height[i]<<endl;
                //setw (20) this line is optional
    }
    infile.close();
    return 0;


}