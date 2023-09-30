#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        char a[11][11];
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                cin>> a[i][j];
            }
        }

        long long k=0;
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                if(a[i][j]== 'X')
                {
                    if(i<=5)
                    {
                        if(j<=5)
                            k += min(i,j);
                        else
                            k += min(i,11-j);
                    }
                    else {
                        if(j<=5)
                            k += min(11-i,j);
                        else
                            k += min(11-i,11-j);
                    }
                }
            }
        }
        cout<<k<<endl;
    }
}
