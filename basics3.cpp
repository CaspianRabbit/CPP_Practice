#include <bits/stdc++.h>
using namespace std;

int main() {
    // characters are stored in single quotes ''
    // strings are stored in double quotes ""
    char a = 'A';
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1 << ", " << str2 << "!" << endl;

    string str3 = "word";
    // concatenation of strings is also possible
    string result = str1 + str3;
    cout << result << endl;

    // comparison of strings is also possible
    if (str1 == str3)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;

    // accessing specific characters in strings is also possible
    // by str[index], with indexing starting with 0
    string str = "Delicious";
    cout << str[6] << endl;
    // can even change the value at that index
    str[6] = 'i';
    cout << str[6] << endl;

    cout << str.size() << endl;
}