#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, count = 0;
  cin>> n;
  int dollars[]={100,20,10,5,1};


  for(int i=0;i<5;i++)
    {
    count += n / dollars[i];
    n = n% dollars[i];
  }

  cout<< count<<endl;
  return 0;
}
