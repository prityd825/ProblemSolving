#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        string s;
        cin >> s;
        vector<char> v;
        char c = s[0];
        for(int i =1; i<n; i++)
        {
            if(s[i] == c)
            {
                v.push_back(c);
                c = s[i+ 1];
                i++;
            }
        }
        for(auto i:v)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
