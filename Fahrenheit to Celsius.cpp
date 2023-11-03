
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    for (int i = a; i <= b; i += k) {
        cout << i;
        int c = ((i - 32) * 5 / 9);
        cout << " " << c << endl;
    }

    return 0;
}
