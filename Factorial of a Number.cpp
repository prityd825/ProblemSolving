#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Error" << endl;
    } else {
        unsigned long long result = factorial(n);
        cout << result << endl;
    }

    return 0;
}
