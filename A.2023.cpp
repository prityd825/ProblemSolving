#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Sort the array in ascending order
        sort(b.begin(), b.end());

        int product = 1;
        for (int i = 0; i < n - k; i++) {
            product *= b[i];
        }

        // Check if the remaining product is equal to 2023
        if (product == 2023) {
            cout << "YES" << endl;

            // Output the k elements that were removed
            for (int i = n - k; i < n; i++) {
                cout << b[i] << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
