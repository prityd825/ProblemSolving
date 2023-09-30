#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int l;
        cin >> l;
        int a[l];
        int count=0, p =0;
        for(int i=0; i<l; i++)
        {
            cin >> a[i];
            if(a[i]==0){
                count++;
            } else {
              p = max(p,count);
              count =0;
            }
        }
        cout<< max(p,count)<< endl;

    }
    return 0;
}
