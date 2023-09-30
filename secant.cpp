#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
double ep=0.11;
double func(double x)
{
    return x*x-4*x-10;
}
int main()
{
    long long int t,i,n,d=1;
    double x0,x1;

    cin>>x0>>x1;
    while(abs(x1-x0)>=ep)
    {
        double r=func(x1)*(x1-x0),p=func(x1)-func(x0);
        double mid=x1-r/p;
        cout<<"X"<<++d<<" = "<<mid<<endl;
        x0=x1;
        x1=mid;
    }
}
