#include<bits/stdc++.h>
using namespace std;

class my_Data {
// we can use access specifiers -> public, private and protected.
public:
    // Data Members
    string name;
    int id;

    // outside class member function definition
    void printid();

    // Member Functions
    void printname() {
        cout << "name is " << name <<endl;
    }
/* 
    Member Functions in Classes
    There are 2 ways to define a member function:
    •inside class definition
    •outside class definition 
    To define a member function outside the class definition we have 
    to use the scope resolution:: operator along with 
    the class name and function name. 
*/
};

//outside class definition of a member function
// we also have to just define this function inside the class
void my_Data::printid() {
    cout << "id is " << id <<endl;
}

int main() {
    // creating an object named details.
    my_Data details;

    // accessing data members
    details.name = "karthikeya";
    details.id = 536;

    // accessing object member function
    details.printname();
    details.printid();

    return 0;
}
