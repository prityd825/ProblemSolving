#include <iostream>
#include <string>
#include <cctype>

string convertString(string str) {
    int n = str.size();

    if (n > 0) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; i < n; i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    return str;
}
