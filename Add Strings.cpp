#include <string>

using namespace std;

string stringSum(string num1, string num2) {
     int n1 = num1.length() - 1;
    int n2 = num2.length() - 1;

    int carry = 0;
    string ans;

    while (n1 >= 0 || n2 >= 0 || carry > 0) {
        int digit1 = (n1 >= 0) ? num1[n1--] - '0' : 0;
        int digit2 = (n2 >= 0) ? num2[n2--] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;

        ans.insert(ans.begin(), sum + '0');
    }

    return ans;
}
