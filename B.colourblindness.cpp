#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string first,second;
        cin>> first;
        cin>> second;
        for(int i=0;i<n;i++)
        {
            if(first[i]!= second[i] && (first[i] =='R' || second[i]=='R'))
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout<< "NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
}
