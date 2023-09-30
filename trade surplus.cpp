#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int expA, impA, expB, impB;
        cin >> expA >> impA >>expB >> impB;

        int netExportA = expA - impA;
        int netExportB = expB - impB;

        if  (netExportA + netExportB < 0){
            cout << "YES" << std::endl;
        } else {
            cout << "NO" << std::endl;
        }
    }

    return 0;
}

