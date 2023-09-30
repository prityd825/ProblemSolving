#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t, reversee="";
    cin>> s>>t;
    int l = s.length();
    for(int i= l-1;i>=0;i--){
        reversee+= s[i];
    }
    if(reversee == t)
    {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}
