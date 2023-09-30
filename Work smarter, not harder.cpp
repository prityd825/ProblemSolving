#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int L, V1, V2;
        cin >> L >> V1 >> V2;

        int t = L / V1;
        int h = ceil((double)L / V2);

        if (h <= t) {
            cout << 0 << endl;
        } else {
            cout << h - t << endl;
        }
    }

    return 0;
}
