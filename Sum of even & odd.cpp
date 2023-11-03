#include <bits/stdc++.h>
using namespace std;

int main() {

    int number;
    cin>> number;
    int evenSum = 0;
    int oddSum = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        number /= 10;
    }
    cout<< evenSum<<" "<<oddSum<<endl;

    return 0;
}
