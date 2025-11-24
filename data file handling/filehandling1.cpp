//     Mode	Description
// ios::in	File open for reading. If file does not exists, the open operation fails.
// ios::out	File open for writing: the internal stream buffer supports output operations.
// ios::binary	Operations are performed in binary mode rather than text.
// ios::ate	The output position starts at the end of the file.
// ios::app	All output operations happen at the end of the file, appending to its existing contents.
// ios::trunc	Any contents that existed in the file before it is open are discarded.





#include <iostream>
#include<fstream>
using namespace std;

int main() {

    // Open a file
    ofstream ofs;
    ofs.open("file.txt");//create and open the file for writting and also overwitten the exited text file
    //    ↑ is object



    // Write the string to the file
    ofs << "Welcome to my File ";
    ofs.close(); //save the content of file and close it
    cout<<"File created and written"<<endl;
    char s[100];
    ifstream ifs("file,txt");
    ifs>>s;
    cout<<s;
    ifs.close();


    return 0;
}