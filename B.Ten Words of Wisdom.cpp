#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    int a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<int, int>> pairs;
        for (int i = 0; i < n; i++)
        {
            cin>> a>> b;
            if (a <= 10)
            {
                pairs.push_back(make_pair(a, b));
            }
            else
            {
                pairs.push_back(make_pair(-1, -1));
            }
        }


        pairs.erase(remove_if(pairs.begin(), pairs.end(), [](const pair<int, int>& p) {
            return p.first > 10;
        }), pairs.end());


        int maxIndex = -1;
        int maxBValue = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (pairs[i].second > maxBValue)
            {
                maxBValue = pairs[i].second;
                maxIndex = i+1;
            }
        }

        cout<< maxIndex << endl;
    }
    return 0;
}
