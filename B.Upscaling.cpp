#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       for (int i = 0; i < (1 << n); ++i) {
        for (int j = 0; j < (1 << n); ++j) {
            if ((i / 2) % 2 == 0 && (j / 2) % 2 == 0)
                cout << "#";
            else if ((i / 2) % 2 == 1 && (j / 2) % 2 == 1)
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
       }
    }

    return 0;
}
