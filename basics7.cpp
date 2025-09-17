#include <bits/stdc++.h>
using namespace std;

void increment(int *x) {
    (*x)++;
    // or
    // *x = *x + 2;
}

int main() {
    int x = 4;
    int *p_x = &x;
    cout << "Address of x: " << &x << endl;
    cout << "Value of p_x: " << p_x << endl;
    cout << "Value at *p_x: " << *p_x << endl;
    *p_x = 5;
    cout << "x: " << x << endl;
    cout << "p_x + 1: " << p_x + 1 << endl;
    int **p_p_x = &p_x;
    cout << "Address of p_x: " << &p_x << endl;
    cout << "Value of p_p_x: " << p_p_x << endl;
    cout << "Value at *p_p_x: " << *p_p_x << endl;
    cout << "Value at **p_p_x: "<< **p_p_x << endl;
    // changing value of x through double pointers
    **p_p_x = 9;
    cout << "Value at **p_p_x: "<< **p_p_x << endl;
    cout << "increment fxn by pointers" << endl;
    int a = 4;
    cout << a << endl;
    increment(&a);
    cout << a << endl;
}
