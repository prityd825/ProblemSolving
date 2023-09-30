#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 int a,b,c;
 cin>> t;
 for(int i=0;i<t;i++){
    cin>> a>> b>> c;
    if(1<= a && b<=9 && (-8 <=c || c<= 18)){
    if(a+b == c)
    {
        cout<<"+"<<endl;
    }
    else {
        cout<<"-"<<endl;
    }
 }

 }
}
