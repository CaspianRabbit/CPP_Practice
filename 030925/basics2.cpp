#include <bits/stdc++.h>
using namespace std;

int main() {
    // a new way to take test cases
    int t;
    cin >> t;
    // while (t--) will take values of t, and the loop will run as long as
    // t is not equal to zero. because then while will take in the value of t,
    // that is, 0, that is, false, and not run the loop
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                cout << "*";
            }
            cout << endl;
        }
    }

    // jump statements:

    // break; will take you out of whatever loop you are in
    // as in, the last for loop we had encountered, we'll get out of it

    // continue; will take you to whatever last for loop we encountered
    // and make code run from there again
}