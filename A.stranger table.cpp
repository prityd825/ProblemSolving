#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,m,x;

    cin>> t;
    while(t--)
    {
        cin>> n>> m>> x;
        long long col = (x/n);
        if(x%n != 0)
            col++;
        long long row = x % n;
        if(row == 0)
            row = n;

        long long ans = ((row - 1) * m) + col;

        cout<<ans<<endl;

    }


}
