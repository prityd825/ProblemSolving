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
        cin>> s;
        vector<string> v;
        for(int i=0; i<n-1; i++)
        {
            v.push_back(s.substr(i,2));
        }
        sort(v.begin(), v.end());

        auto it = unique (v.begin(), v.end());
        v.resize(distance(v.begin(),it));

        cout<< (int)v.size()<< endl;


    }
}
