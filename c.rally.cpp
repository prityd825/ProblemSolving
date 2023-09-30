#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,p=0,aa;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>> a[i];
        sum = sum+a[i];
    }
    p = round(sum*1.0/n);
    for(int i=0;i<n;i++)
    {
        aa += ((p-a[i]) * (p-a[i]));
    }
    cout<< aa<<endl;


}
