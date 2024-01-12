#include<iostream>
using namespace std;

int main() {
    int i = 02;
    while (i < 10) {
        i++;
        if (i%2 == 0) {
            continue;
        }
        cout << i << " ";
    }
}