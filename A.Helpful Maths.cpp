#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;

    vector<int> num;
    for(int i =0;i<s.size(); i += 2)
    {
        num.push_back(s[i]-'0');
    }
    sort(num.begin(), num.end());

    cout<< num[0];
    for(int i = 1; i< num.size();i++)
    {
        cout<<"+" << num[i];
    }
    cout<< endl;
}
