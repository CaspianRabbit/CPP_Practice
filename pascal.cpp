#include <bits/stdc++.h>
using namespace std;

/*

int pascal(int row, int col) {
    // base case
    // outside edge
    if (col == 1 || col == row)
        return 1;
    // inductive case
    else
		return pascal(row - 1, col - 1) + pascal(row - 1, col);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int rows;
        cin >> rows;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << pascal(i, j) << " ";
            }
            cout << endl;
        }
    }
}

*/

int main() {
	int t;
    cin >> t;
    while (t--) {
		int n;
		cin >> n;
		int a[n][n];
		a[0][0] = 1;
		for (int i = 1; i < n; i++) {
			a[i][0] = 1;
			a[i][i] = 1;
			for (int j = 1; j < i; j++) {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
}