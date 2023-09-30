#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,p=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }


        sort(a,a + n);
        a[0] += 1;

        for (int i = 0; i < n; i++) {

                p *= a[i];

        }
        cout <<p<< endl;



}
}
