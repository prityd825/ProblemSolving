#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a[100];
    cin>> t;
    while(t--)
    {

        int a[100];

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        sort(a, a + 3);
        cout<< a[1]<<endl;

    }
}
