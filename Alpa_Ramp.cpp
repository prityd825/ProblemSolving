#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
   char current_char = 'A';
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << current_char;
            if (j < i) {
                std::cout << " ";
            }
        }

        current_char++;
        std::cout << std::endl;
    }
}
