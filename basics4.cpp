#include <bits/stdc++.h>
using namespace std;

int main() {
    // the getline() function !!
    string str1, str2;
    getline(cin, str1);
    cout << str1;

    // okay, so, when it comes to taking input with getline
    // it starts taking input wherever the cursor is currently
    // for instance, you choose to implement test cases
    // in a simple program that just takes input via getline, & prints out each line
    // when you take in the number of test cases via cin, the cursur ends up at 3|
    // full visual:
    // 3|
    // abc def
    // ghi jk l
    // mn o pq

    // the cursor is after 3. so, when getline is executed, it starts there
    // and ends up wasting a turn (of the while loop running)
    // by taking in the empty space of \n after 3 as our first line
    // if you then go on to display the 3 lines you were supposed to take in and display
    // the last line isn't printed because getline() never got there.

    // this is solved by using
    int t;
    cin >> t;
    cin.ignore(); // this basically makes the cursor shift to the next line
    while (t--) {
        string s;
        getline(cin, s);
        cout << s << endl;
    }

    // this is obviously layman terminology.
    // in actuality, this is something that in order to understand,
    // we'll have to understand buffers.
}