#include <iostream>
using namespace std;

int calcGCD(int n, int m) {
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    int gcd = calcGCD(n, m);

    std::cout << "GCD of " << n << " and " << m << " is: " << gcd << std::endl;

    return 0;
}
