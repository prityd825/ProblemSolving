#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;


    while(t--)
    {
        cin>> s;
        string p = "codeforces";
        int count =0;
        for(int i =0;i< 10; i++){
            if(tolower(s[i]) != p[i])
            {
                count = count+1;
            }

        }
        cout<< count<< endl;
    }
    return 0;
}

