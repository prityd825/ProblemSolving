#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>> n;
    string s;
    cin>> s;
    set<char> alphabet;
    for (char c : s) {
        if (isalpha(c)) {
            alphabet.insert(tolower(c));
        }
    }
    if (alphabet.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
    }

