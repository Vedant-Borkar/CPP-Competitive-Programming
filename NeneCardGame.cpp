//Problem:https://codeforces.com/contest/1956/problem/B
//Name:B. Nene and the Card Game
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int countUniqueNumbers(int arr[], int size) {
    std::multimap<int, int> numMap;
    for (int i = 0; i < size; ++i) {
        numMap.insert(std::make_pair(arr[i], i));
    }
    // Counting unique numbers
    int count = 0;
    int prev = -1; // Assuming array elements are non-negative
    for (auto it = numMap.begin(); it != numMap.end(); ++it) {
        if (it == numMap.begin() || it->first != prev) {
            ++count;
            prev = it->first;
        }
    }
    return count;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,sum=0;
  cin>>t;
  while(t-->0){
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
    int dist=countUniqueNumbers(arr,n);
    int ans=n-dist;
    cout<<ans<<"\n";
  }
  return 0;
}