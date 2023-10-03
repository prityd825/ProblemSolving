#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, max_count = 0;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(a[i]==k)
                flag=1;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
    return 0;
}
