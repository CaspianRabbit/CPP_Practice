#include <bits/stdc++.h>
using namespace std;

// pass by value.
// a fxn that takes in value of a, increments it
// increment0 fxn takes in value of a,
// basically makes a copy of a to work on,
// doesn't actually change the value of a.
int increment0(int n) {
    n++;
    return n;
}

// for instance, we have this fxn, which returns nothing, i.e., void
// this will not affect the value of a at all
void increment1(int n) {
    n++;
    // don't have to return anything
}

// pass by reference.
// we go on to the address of the integer that we're working on
// and then change the value at that address
void increment2(int &n) {
    n++;
}

// demonstrating that arrays are always passed by reference
void func(int arr[]) {
    arr[0] = 5;
}

int main() {
    int a = 3;
    cout << a << endl;

    // assigning incremented value to a
    a = increment0(a);
    cout << a << endl;

    // we cannot do a = increment1(a), it shows error
    // this is cause increment1() fxn returns void
    // we can't expect any result from it
    // an int can't be assigned anything by a fxn that doesn't even return anything to it
    increment1(a);
    cout << a << endl;

    increment2(a);
    cout << a << endl;

    // in c, if you have to do the same thing,
    // you need pointers
    // in c++, we can do this simply by reference

    // this same thing applies for all data types EXCEPT arrays
    // arrays can never be passed by value
    // only and always by reference
    int arr[10];
    arr[0] = 7;
    cout << "arr[0] = " << arr[0] << endl;
    func(arr);
    cout << "arr[0] = " << arr[0] << endl;
}