#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int countA = 0, countB = 0;
        char a[5];
        for (int i = 0; i < 5; i++) {
            cin >> a[i];
            if (a[i] == 'A') {
                countA++;
            } else if (a[i] == 'B') {
                countB++;
            }
        }

        if (countA > countB) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }
    return 0;
}
