#include<bits/stdc++.h>
using namespace std;


int main()
{
    int ch;
    cin>> ch;
    int a,b;
    cin>> a>>b;
 int result = 0;

    switch (ch) {
        case 1:
            result = 3.1416 * a * b;
            break;
        case 2:
            result = a * b;
            break;
        default:
            result = -1;
            break;
    }

    cout << result << endl;

    return 0;
}
