#include<bits/stdc++.h>
using namespace std;

int main()
{
int x,y;
cin>>x>>y;
int k=1;
int ans=0;
while (k<y){
	k+=x;
	k-=1;
	++ans;
}
cout<<ans<<endl;

	return 0;
}
