#include<bits/stdc++.h>
using namespace std;

int main() {
    
    /*
    Lists are the same as vectors but with a difference that the operations can be
    performed from the front also. 
    */

    //declaration
    list<int> lst;

    lst.push_back(2); // {2}
    lst.emplace_back(4); // {2, 4}

    lst.push_front(1); // {1, 2, 4}

    lst.emplace_front();  // {2, 4}

    // rest all functions are same as the vector
    // begin, end, clear, insert, size, swap
}