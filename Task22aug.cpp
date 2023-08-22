#include<iostream>
using namespace std;

// 22A91A05A1
class today {
private:
	int value;
public:
    void setValue(int _value) {
        value = _value;
    }
    int getValue() {
        return value;
    }

    /*void display() {
        cout << "the value is: " << value <<endl;
    }*/
};

int main() {
	today t1;
    t1.setValue(50);
    //t1.display();
    cout << t1.getValue() << endl;
	return 0;
}