#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
 int i=1;
	while (i <= n){
		int sp=1;
		while (sp <= n-i){
			cout<<" ";
			sp++;
		}
		int j=1;
		while (j <= 2*i-1){
			cout<<"*";
			j++;
		}
	cout<<endl;
	i++;
	}

    for (int i = n; i >= 1; i--) {
        for (int sp = 1; sp <= n - i; sp++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }


}
