#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Find the highest power of 2 less than or equal to n
        long long k = log2(n);

        // Calculate x using the formula n / (2^k - 1)
        long long x = n / (pow(2, k) - 1);

        cout << x << endl;
    }

    return 0;
}
