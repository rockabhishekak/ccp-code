#include<iostream>
#include<string>

using namespace std;
class student{ // base class
    protected:
        int id;
    public:
        void setId(){
            cout << "Enter student ID: ";
            cin >> id;
        }
        void displayId(){
            cout << "Student ID: " << id << endl;
        }
};
class details : public student{ // derived class from student
    protected:
        string name;
    public:
        void setName(){
            cout << "Enter student name: ";
            cin.ignore(); // to ignore the newline character left in the buffer
            getline(cin, name);
        }
        void displayName(){
            cout << "Student Name: " << name << endl;
        }
};
int main(){
    details obj; // creating object of derived class
    obj.setId(); // calling base class function
    obj.setName(); // calling derived class function
    obj.displayId(); // calling base class function
    obj.displayName(); // calling derived class function
    return 0;
}