#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 100000;
    int b = 100000;
    long long int c = a * 1LL * b;
    cout << c << endl;
    // basically, what's happening here is that
    // multiplying a and b will give us an int,
    // which will then get stored as a long int
    // but the range of int is roughly < around 10^9
    // so the messed up value gets stored in c
    // to rectify that, we multiply with 1LL
    // 1LL is a long long int the same way 1.0 is a float

    double x = 100000;
    double y = 100000;
    double z = x * y;
    cout << fixed << setprecision(0) << z << endl;
    // without the fixed keyword, we get our output in scientific notation lol
    // setprecision(0) will make cout print only the non-decimal part of the result
    // BUT we prefer not to do this type of calculation in double
    // cause we may be able to store a HUGE number in double
    // but we cannot store it accurately.
    // example shown by a variable c = 1e24, which should print out 10^24
    // but it prints out a value near it somewhere
    // double and float, both data types have these precision errors
}