// #include <iostream>
// using namespace std;
// int main()
// {
// double x = 12.25;
// cout.precision(2); // Precision 2
// cout << " By default: " << x << endl;
// cout << " showpoint: " << showpoint << x << endl;
// cout << " fixed: " << fixed << x << endl;
// cout << " scientific: " << scientific << x << endl;
// return 0;
// }



// average.cpp
// Computing the average of numbers
// #include <iostream>
// using namespace std;
// int main()
// {
// int x, count = 0;
// float sum = 0.0;
// cout << "Please enter some integers:\n"
// "(Break with any letter)"
// << endl;
// while( cin >> x )
// {
// sum += x;
// ++count;
// }
// cout << "The average of the numbers: "
// << sum / count << endl;
// return 0;
// }

// string1.cpp: Using strings
#include <iostream>
#include <string>
using namespace std;
string prompt("Enter a line of text: "), // Global
line( 50, '*'); // strings
int main()
{
string text; // Empty string
cout << line << endl << prompt << endl;
getline( cin, text); // Reads a line of text
cout << line << endl
<< "Your text is " << text.size()
<< " characters long!" << endl;
// Two new strings:
string copy(text), // a copy and the
start(text,0,10); // first 10 characters
// starting with
// position 0.
cout << "Your text:\n" << copy << endl;
text = "1234567890"; // Assignment
cout << line << endl
<< "The first 10 characters:\n" << start << endl
<< text << endl;
return 0;
}