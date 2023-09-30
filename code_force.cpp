#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n)
{
    static int c = 2;
    if(c>n)
        return 1;
    if(n%c ==0)
        return 0;
    int np = n-(n/c);
    c++;
    return isLucky(np);
}

int main()
{
    int x;
    cin>>x;
    if(isLucky(x))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
