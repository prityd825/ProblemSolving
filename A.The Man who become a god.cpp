#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,k,i;
        cin>> n>> k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>> a[i];
        }
       vector<int> arr(n-1);
       for(i=1 ;i<n;i++){
        arr[i-1]= abs(a[i] - a[i-1]);
       }
       sort(arr.begin(),arr.end());
       int sum=0;
       for(i=0;i<n-k;i++){
        sum = sum+ arr[i];
       }
       cout<< sum<<endl;
    }
}
