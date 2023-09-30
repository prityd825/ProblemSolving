#include<bits/stdc++.h>
using namespace std;


int main(){
long long int t;
int n;
int a[100];
cin>> t;

for(int i=0;i<t;i++)
{   int p=0,s=0;
   cin>> n;
   for(int i=0;i<n;i++){
    cin>> a[i];
   }



   for(int i=0;i<n;i++){
    if(a[i]% 2==0){
         p = p+a[i];
    } else {
        s = s+ a[i];
    }

   }
   if(p> s)
   {
       cout<< "YES" << endl;
   } else {
       cout<<"NO"<<endl;

   }

}

}
