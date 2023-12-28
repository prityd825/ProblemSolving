#include <iostream>
#include <vector>

using namespace std;

char findReplacedLetter(const vector<string>& latinSquare) {
    char missingLetter = 'A';
    for (char letter = 'A'; letter <= 'C'; ++letter) {
        bool found = false;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (latinSquare[i][j] == letter) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (!found) {
            missingLetter = letter;
            break;
        }
    }
    return missingLetter;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> latinSquare(3);
        for (int i = 0; i < 3; ++i) {
            cin >> latinSquare[i];
        }

        char replacedLetter = findReplacedLetter(latinSquare);
        cout << replacedLetter << endl;
    }

    return 0;
}
