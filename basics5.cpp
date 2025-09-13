#include <bits/stdc++.h>
using namespace std;

int main() {
    // reversing a string
    // now, you may think of doing this by making an empty string,
    // and concatenating the characters of the original string to it 1 by 1
    // this works, BUT it's not recommended
    // this is cuz of reasons of time complexity (later) etc
    // instead, use push_back. We do this:

    string str;
    cin >> str;
    string str_rev;
    for (int i = str.size() - 1; i >= 0; --i) {
        str_rev.push_back(str[i]);
    }
    cout << str_rev << endl;

    // checking palindromes
    if (str == str_rev) {
        cout << "Palindrome! :)" << endl;
    }
    else {
        cout << "Not Palindrome. :(" << endl;
    }
}