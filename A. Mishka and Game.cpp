#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int m=0,c=0;
    while (n--){
        int a, b;
        cin>> a>> b;

        if(a> b){
            m = m+1;
        } else if (b> a){
            c = c+1;

        }

    }

    if(m > c){
        cout<<"Mishka"<<endl;
    } else if(m < c){
        cout<<"Chris"<< endl;
    } else
    {
        cout<<"Friendship is magic!^^" <<endl;
    }
}
