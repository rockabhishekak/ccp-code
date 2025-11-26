#include<iostream>
#include<fstream>
using namespace std;
int main() {

    // Open a file
    ofstream ofs("file2.txt",ios::app|ios::out);
    char ch;
    cout<<"Enter text to write to file (type '.' to end): "<<endl;
    // cin.ignore();
    while (true) { 
        cin.get(ch); 
        if (ch == '.') {
            break; 
        }
        ofs.put(ch);
    }
    ofs.close(); // Close the file
    cout<<"File created and written using put() function."<<endl;
    return 0;
}