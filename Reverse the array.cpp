Problem_link: https://www.codingninjas.com/studio/problems/reverse-the-array_1262298?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
void reverseArray(vector<int> &arr, int m) {
   int n = m+1;
   int s = arr.size()-1;
   while(n<=s){
     swap(arr[n],arr[s]);
     n++;
     s--;
   }
}
