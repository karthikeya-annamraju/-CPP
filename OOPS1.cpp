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

// Class and object
//different ways to create an object
class HumanBeing {
public:
	string name;
	void Introduce();
};
void HumanBeing::Introduce() {
	cout << "hi my name is " << name << endl;
}


int main() {
	takeInput();
	//creating an object
	HumanBeing karthikeya;
	string name;
	cin >> name;
	karthikeya.name = name;
	// calling method inside the class
	karthikeya.Introduce();

}
