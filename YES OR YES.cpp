#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char a[3];
    cin>>t;
    for (int i = 0; i < t; i++){
          for (int i = 0; i < 3; i++) {
            cin >> a[i];
          }
         if((a[0]=='Y'|| a[0]=='y') && (a[1]== 'E' || a[1]=='e') && (a[2]=='s' || a[2] == 'S' ))
               {
                  cout<<"YES"<<endl;

               }
                else {
                    cout<<"NO"<<endl;
                }
         }




    }




