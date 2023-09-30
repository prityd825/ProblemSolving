#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        char a[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }

        bool found_v = false, found_i = false, found_k = false, found_a = false;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j] == 'v')
                    found_v = true;
                else if (a[i][j] == 'i')
                    found_i = true;
                else if (a[i][j] == 'k')
                    found_k = true;
                else if(a[i][j]=='a')
                    found_a = true;
            }
        }


        if (found_v && found_i && found_k && found_a)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
