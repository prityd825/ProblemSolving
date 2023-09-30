#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t,n,a[55];
     cin>>t;
     while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }
        sort(a,a+n);
        vector<int>v;
        int diff = 0;
        for(int i=1; i<n; i++){
            diff = abs(a[i] - a[i-1]);
            v.push_back(diff);
        }
        sort(v.begin(), v.end(), greater<int>());

        if(v[0] > 1){
            cout<<"NO"<<endl;
        }
        else if(v[0]<=1){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
