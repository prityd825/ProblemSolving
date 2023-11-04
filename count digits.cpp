#include <iostream>
#include <vector>

int countEvenlyDividingDigits(int n) {
    int originalN = n;
    std::vector<int> digits;

    while (n != 0) {
        int digit = n % 10;
        if (digit != 0 && originalN % digit == 0) {
            digits.push_back(digit);
        }
        n /= 10;
    }

    return digits.size();
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    int count = countEvenlyDividingDigits(n);

    std::cout << "Number of digits that evenly divide " << n << ": " << count << std::endl;

    return 0;
}
