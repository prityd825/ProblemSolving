#include<bits/stdc++.h>
using namespace std;

bool Square(vector<int>& squares) {
    int sum = 0;
    for (int count : squares) {
        sum += count;
    }
    int s = sqrt(sum);
    return (s * s == sum);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> squares(n);
        for (int i = 0; i < n; ++i) {
            cin >> squares[i];
        }

        if (Square(squares)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
