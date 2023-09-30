#include<bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;

        int n = x.size();
        int k = n;

        for (int i = 0; i < n; ++i) {
            if (x[i] >= '5') {
                k = i;
                break;
            }
        }

        if (k == n) {
            cout << x << endl;
        } else {
            while (k > 0 && x[k - 1] == '9') {
                k--;
            }

            if (k == 0) {
                cout << '1';
                for (int i = 0; i < n; ++i) {
                    cout << '0';
                } cout<<endl;
            } else {
                x[k - 1]++;
                for (int i = k; i < n; ++i) {
                    x[i] = '0';

                }
                cout << x.substr(0, k) << endl;
            }
        }
    }

    return 0;
}
