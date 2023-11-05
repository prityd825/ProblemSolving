#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int count =0;
	int t;
	cin>> t;
	while(t--){
	    int n;
	    cin>> n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    bool isAscending = true;

        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                isAscending = false;
                break;
            }
        }

        if (isAscending) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }


	return 0;
}
