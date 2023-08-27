
#include<bits/stdc++.h>
// we use the above to prevent including all stl libraries separately
#include<string>
#include<algorithm>
#include<array>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<set>
using namespace std;

inline void takeInput() {
	#ifndef ONLINE_JUDGE
    // get input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
#endif
}

int main() {
	takeInput();

	// STL IN CPP.

	// ARRAY
	//declaration
	// #include<array>
	array<int, 4> arr = {1, 2, 3, 4};

	//to find size
	int size = arr.size();
	cout << "size(arr) = " << size << endl;

	//to traverse
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
 	}
 	cout << endl;

	//.at() function -> returns value at specified index
	cout << "element at 2nd index is " << arr.at(2) << endl;

	//.empty() function -> returns 0 if array != empty, else returns 1
	cout << arr.empty() << endl;

	//.front() and .back() function ->
	// returns the first and last element of the array respectively
	cout << "1st element is " << arr.front() <<endl;
	cout << "2nd element is " << arr.back() <<endl;
	

	// VECTOR
	//vector -> vector is a dynamic datatype that is similar to array that can increase the size of itself 
	// when we try to push an element after the size is full
	// basically it creates a new vector of double it's size and copies all the elements from 1st vector to
	// the 2nd vector and then discards the first vector.
	// size and capacity are diff
	// size is -> no of elements in vector.
	// capacity is -> amt of memory for the vector.

	// declaration of a vector.
	//#include<vector>
	vector<int> v; // size and capacity is 0.
	// capacity and size are different here.
	cout << v.capacity() << endl;

	//.push_back() function -> to append an element to vector
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	cout << "capacity is " << v.capacity() << endl;

	// traversal
	cout << "traversal" << endl;
	for (int i:v) {
		cout << i << " ";
	} cout << endl;

	//.pop_back() function -> pops last element of vector
	v.pop_back();
	cout << "capacity is "<< v.capacity() << endl;

	//.at() function can be used to obtain element at index.
	cout << v.at(2) << endl;

	//.front() and .back() functions can be used.
	cout << "first element " << v.front() << endl;
	cout << "last element " << v.back() << endl;

	//.clear() function -> clears the vector and size becomes 0.
	v.clear();

	//more ways to initialise a vector.
	vector<int> a(5, 1);
	// (5, 1) = (size, data to initialise the vector)
	// the above initialises a vector of size 5 with all elements as 1, if not specified, 
	// adds 0 by def.
	for (int i:a) {
		cout << i << " ";
	} cout << endl;

	// to copy data from one vector to another.
	// syntax-> vector<int> new_vector_name(vec_name to be copied);
	vector <int> copied_vector(v);
	for (int i:copied_vector) {
		cout << i << " ";
	} cout << endl;


	// DEQUE
	// deque -> operations can be performed at both ends of a deque

	//declaration
	//#include<deque>
	deque <int> d;

	// push operations.
	d.push_back(1);
	d.push_front(2);
	// we pushed 2 to the front and 1 to the back so our data must be (2, 1)
	for (int i: d) {
		cout << i << " ";
	} cout << endl;

	// pop operations.
	d.pop_back();
	// we pop from back so the element at back will be popped. i.e 1
	for (int i: d) {
		cout << i << " ";
	} cout << endl;
	// o/p = 2
	d.pop_front();
	//op = 1

	//.at() function-> to find element at an index
	cout << d.at(index_number) << endl; 

	//.front() and .back()-> to find first and last elements.
	cout << "front element " << d.front() << endl; 
	cout << "back element " << d.back() << endl;

	// .erase() function
	//syntax-> deque_name.erase(start_indx, end_indx)
	// we have to erase the first element, so
	d.erase(d.begin(), d.begin()+1);


	// LIST
	// works like a doubly linked list (or) list in stl is derived from doubly linked list.
	// we cant traverse directly using subscript or .at() function.
	// we need to traverse in the same way as we do in a linked list.
	//declaration
	// #include<list>

	list <int> l;

	l.push_back(1);
	l.push_front(2);
	//pop_front() and pop_back() can also be used.

	for (int i:l) {
		cout << i << " ";
	} cout << endl;

	// o/p-> 2, 1

	//.erase() function can be used
	//syntax-> deque_name.erase(start_indx, end_indx)
	l.erase(l.begin());
	// this erases the first element of the list.

	// new list can be created and copied.
	list<int> new(l);
	//the contents of list l get copied into list new.


	// STACK
	// follows LIFO (last-in-first-out)
	//declaration
	// #include<stack>
	stack <string> s;

	//.push() can be used to push data into the stack.
	s.push("hash");
	s.push("the");
	s.push("pug");

	//.top() can be used to view the stack top element.
	// here 'pug' is the last in, so its on stack top
	cout << s.top() <<endl;

	//.pop() can be used to pop an element from stack.
	// as stack is lifo, the pop is perfomed on the stack top always.
	s.pop();
	// 'pug is popped' and stack top is moved to 'the'.
	cout << s.top() <<endl;

	//.size() can be used to find size of stack.
	cout << s.size() << endl;

	//empty or not
	// 0-> false, 1-> true
	cout << s.empty() << endl;


	// QUEUE
	// follows FIFO (first-in-first-out)
	//declaration
	// #include<queue>
	queue <string> q;

	//.push() can be used to push data into the queue.
	q.push("hash");
	q.push("the");
	q.push("pug");

	//.pop() functions pops data from the front.
	//i.e the data which is pushed in first is popped out first.
	cout << "before pop front is " << q.front() << endl;
	q.pop();
	cout << "after pop front is " << q.front() << endl;

	//size decreases as we pop.



	// SET
	// uses BST implementation (BTS)
	// cannot contain duplicate values.(stores only unique elements)
	// set is immutable (only add and delete) can't modify
	// set is slower than unordered set.
	//declaration
	//#include<set>
	set <int> s;

	//.insert() is used to add data into a set.
	// complexity -> O(log n)
	s.insert(5);
	s.insert(5);
	s.insert(4);
	s.insert(1);
	s.insert(6);
	s.insert(0);
	s.insert(0);

	for (int i: s) {
		cout << i << " ";
	} cout << endl;

	//o/p-> 0 1 4 5 6

	//.erase() function is used to remove an element from the index using .begin() iterator
	s.erase(s,begin()+1);
	// pops the first element.

	//.count() function
	// returns 1 if element is present in set else returns 0
	cout << s.count(5) << endl;
	// 5 is present so it prints 1.

	//.find() function -> returns the index of the specified element
	// set = {0, 5, 6}
	cout << s.find(5) << endl;
	//o/p-> 1


}
