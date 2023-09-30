#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a, b, c;

        if (n % 2 == 0) {
            a = 1;
            b = 1;
            c = n - (a + b);
        } else {
            a = 3;
            if ((n - a) % 2 != 0) {
                b = 2;
                c = n - (a + b);
            } else {
                b = 3;
                c = n - (a + b);
            }
        }

        cout << c << ' ' << b << ' ' << a << endl;
    }

    return 0;
}
