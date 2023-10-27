#include<bits/stdc++.h>
using namespace std;


int main ()
{
     int num;

    cin >> num;

    int evenSum = 0;
    int oddSum = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        num /= 10;
    }

    cout<< evenSum <<" "<< oddSum << endl;


    return 0;
}
