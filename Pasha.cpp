#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x % 2 != 0)
        cout << 0;
    else 
        cout << ((x / 2) - 1) / 2;
}