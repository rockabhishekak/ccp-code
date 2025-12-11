#include<iostream>
#include<string>
using namespace std;
// A loose realtionship = objects can exist independently
class Student{
    string name;
    public:
    Student(string n){
        name = n;
    }   
    string getName(){
        return name;
    }
};
class Teacher{
    string name;
    public:
    Teacher(string n){
        name = n;
    }   
    void teach(Student &s){
        cout<<name<<" is teaching "<<s.getName()<<endl;
    }
};
int main(){
    Student s1("Alice");
    Teacher t1("Mr. Smith");
    t1.teach(s1);
    return 0;
}