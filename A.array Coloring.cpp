#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        int a=0,b=0;

        for (int num : nums) {
        if (num % 2 == 0) {
            a= a+num;
        } else {
            b = b+num;
        }
    }


        if ((a%2==0 && b%2==0) || (a%2==1 && b%2==1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
