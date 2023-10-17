#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // stack -> LIFO - Last in First out.
    // all the stack operations take linear time complexity of o(1).

/*
only three operations :
    1. push
    2. pop
    3. top
*/

    //declaration
    stack<int> st;
    st.push(1);  // {1}
    st.push(2);  // {2, 1}
    st.push(3);  // {3, 2, 1}
    st.push(3);  // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    // to display the top of the stack
    cout << st.top() <<endl; // prints 5 
    // indexing in a stack is invalid

    st.pop();  // stack after pop looks like {3, 3, 2, 1}

    cout << st.top() <<endl;  // prints 3

    cout << st.size() <<endl;  // prints the size of the stack

    cout << st.empty() <<endl;  // returns True if stack is empty, else returns False

    //swap
    stack<int> stack_one, stack_two;
    stack_one.swap(stack_two);


}