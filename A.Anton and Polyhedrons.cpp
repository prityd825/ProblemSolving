#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,sum=0;
    cin>> t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s== "Icosahedron" || s=="icosahedron"){
            sum = sum+20;
        } else if(s== "Cube" || s== "cube")
        {
            sum = sum+6;
        }else if(s== "Octahedron" || s== "octahedron"){

            sum = sum+8;
        }else if(s=="Dodecahedron" || s== "dodecahedron")
        {
            sum = sum+12;
        } else if(s== "Tetrahedron" || s== "tetrahedron")
        {
            sum = sum+4;
        }

    }
    cout<< sum;
}
