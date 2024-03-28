#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string time24;
        cin >> time24;

        int hour = stoi(time24.substr(0, 2));
        int minute = stoi(time24.substr(3, 2));

        string period = (hour < 12) ? "AM" : "PM";

        if (hour == 0) {
            hour = 12;
        } else if (hour > 12) {
            hour -= 12;
        }

        cout << (hour < 10 ? "0" + to_string(hour) : to_string(hour)) << ":"
             << (minute < 10 ? "0" + to_string(minute) : to_string(minute))
             << " " << period << endl;
    }

    return 0;
}
