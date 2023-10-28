
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s)
{
    string p=s;
    reverse(p.begin(), p.end());
    if(s==p)
    return true;
    else
    return false;
}

int main()
{
    int i;
    cin>>i;
    while(i--)
    {
        string s;
        cin>> s;
        if(checkPalindrome(s)== true)
        cout<<"Yes"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
