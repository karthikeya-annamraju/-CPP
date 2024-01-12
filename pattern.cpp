/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/


#include<iostream>
using namespace std;

int main() {
    int i = 0;
    int j = 0;
    while (i < 5) {
        cout << "* "; 
        j++;
        if (j == 5) {
            cout << "\n";
            j = 0;
            i++;
        }
        
    }

}