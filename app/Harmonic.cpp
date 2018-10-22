//
// Created by Gang-Ryung Uh on 6/14/18.
//    Prints the nth harmonic number: 1/1 + 1/2 + ... + 1/n.
// input: 10
// output: 2.928968
// input: 10000
// output: 9.787606

#include <iostream>
#include <iomanip>
using namespace std;

double harmonic(int n);

int main() {
    int n;
    cout << setprecision(6) << fixed << showpoint;
    cout << "Type in Non-zero positive integer: " << flush;
    while (cin >> n && n != 0) {
        cout << "Output: " << harmonic(n) << endl;
        cout << "Type in Non-zero positive integer: " << flush;
    }
    return 0;
}

double harmonic(int n) {
    double sum = 0.0;
    // implement with a loop



    return sum;
}
