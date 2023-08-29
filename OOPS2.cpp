#include<bits/stdc++.h>
using namespace std;

inline void takeInput() {
	#ifndef ONLINE_JUDGE
    // get input from input.txt file
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
#endif
}

// private: access specifier

class HumanBeing {
private:
	string name;
	int age;
public:
	void setData(int val, string word) {
		age = val;
		name = word;
	}
	void getData() {
		cout << "I'm " << name << " of age " << age <<endl;
	}
};


int main() {
	takeInput();
	//creating an object
	HumanBeing karthikeya;
	karthikeya.setData(18, "karthikeya");
	karthikeya.getData();
	// we cannot access the data within the private access specifier so
	// we use getters and setters to set the data into the class.


}
