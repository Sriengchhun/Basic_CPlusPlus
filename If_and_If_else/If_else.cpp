#include<iostream>
using namespace std;

int main() {
    int A = 0;
    cout << "Please enter a number for A: " << endl;
    cin >> A;

    if (A == 8) {
        cout << "A is 8" << endl;
    } else if (A > 8) {
        cout << "A is greater than 8" << endl;
    } else {
        cout << "A is less than 8" << endl;
    }

    return 0;
}