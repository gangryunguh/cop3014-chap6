//
// Created by Gang-Ryung Uh on 6/14/18.
//
#include <iostream>
#include <string>
using namespace std;

string binary(long n);

int main() {
    int n;
    cout << "Type in integer value: " ;
    while (cin >> n && n > 0) {
        cout << binary(n) << endl;
        cout << "Type in integer value: " ;
    }
    return 0;
}

string binary(long n) {
    string b = "";
    while (n != 0) {
        if (n % 2)
            b = "1" + b;
        else
            b = "0" + b;
        n >>= 1;
    }
    return b;
}
