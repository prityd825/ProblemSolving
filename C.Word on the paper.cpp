#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    char a[8][8] = {""};

    while(t--)
    {
       for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
            cin>> a[i][j];

       }
       }

       string p = "";
       for(int i =0;i<8;i++){
        for(int j =0;j<8;j++){
            if(a[i][j]>='a' && a[i][j]<='z')
            {
                p = p+a[i][j];
            }
        }
       }
       cout<<p<<endl;
    }
}
