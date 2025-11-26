#include<iostream>
#include<fstream>
using namespace std;
int main() {

    // Open a file
    ofstream ofs("file2.txt");
    char ch;
    cout<<"Enter text to write to file (type '.' to end): "<<endl;
    // cin.ignore();
    while (true) {
        // cin>>ch; // but this not store the space 
        cin.get(ch); // Read a character from standard input
        if (ch == '.') {
            break; 
        }
        ofs.put(ch); // Write the character to the file
    }
    ofs.close(); // Close the file
    cout<<"File created and written using put() function."<<endl;
    return 0;
}