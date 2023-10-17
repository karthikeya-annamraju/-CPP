#include<bits/stdc++.h>
using namespace std;

int main() {
    //basic syntax

    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second;

    //pairs can be nested to store more than 2 values
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    //we can create arrays using pairs
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[1].second;
}