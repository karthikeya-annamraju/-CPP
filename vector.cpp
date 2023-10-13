#include<bits/stdc++.h>
using namespace std;

int main() {

    //basic declaration
    vector<int> v;  // creates a blank vector { }

    //push_back() function -> adds data into the vector.
    v.push_back(1);
    // emplace_back() is faster than push_back function.
    v.emplace_back(2); //adds 2 into the vector
    // {1, 2}

    // we can use pairs with vectors.
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    // no need to use {} for emplace back when using pairs.
    vec.emplace_back(3, 4);

    //container with already containing data
    vector<int> v(5, 100);  //here a vector with 5 instances of 100 is created

    //suppose we want our vector to be initialised with no values
    vector<int> v(5);      // declares {0, 0, 0, 0, 0}

    //we can store a vector in another vector
    vector<int> v1(5, 20);  // {20, 20, 20, 20, 20}
    vector<int> v2(v1);     // v2 = {20, 20, 20, 20, 20}

    //we can also use iterators on vectors
    vector<int>::iterator it = v.begin(); //.begin() points to the adress and not the value directly.
    // we can use (*it) to print the data.

    //iterators tbc.


    //erase function
    // {10, 20, 12, 23}
    v.erase(v.begin()+1); // {10, 12, 23}

    // {10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4);    // {10, 20, 35}  // [start, end) //end is not inclusive.
    
    
    //insert function -> costly fn (in terms of complexity)
    vector<int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin()+2, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // copy = {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    //size function
    v.size();

    // {10, 20}
    v.pop_back();    // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2);    // v1 -> {30, 40}    v2 -> {10, 20}

    // clear function
    v.clear(); //clears the entire vector no matter how big the size of the vector is.

    // to check if a vector is empty or not
    cout << v.empty();
}
