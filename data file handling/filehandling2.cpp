//     Mode	Description
// ios::in	File open for reading. If file does not exists, the open operation fails.
// ios::out	File open for writing: the internal stream buffer supports output operations.
// ios::binary	Operations are performed in binary mode rather than text.
// ios::ate	The output position starts at the end of the file.
// ios::app	All output operations happen at the end of the file, appending to its existing contents.
// ios::trunc	Any contents that existed in the file before it is open are discarded.




#include<string>
#include <iostream>
#include<fstream>
using namespace std;

int main() {

    fstream ofs;
    ofs.open("file.txt",ios::out); 
    ofs << "Welcome to my File ";


    // ofs.close(); //save the content of file and close it
    cout<<"File created and written"<<endl;
    string s[100];
    ifstream ifs("file,txt");
    ifs>>s;
    cout<<s;
    ifs.close();


    return 0;
}