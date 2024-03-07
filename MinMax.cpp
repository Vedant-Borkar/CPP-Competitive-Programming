//Problem:https://codeforces.com/contest/1934/problem/A
//Name:A. Too Min Too Max
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j=0,k,t,count=0,sum=0;
  cin>>t;
  while(t-->0){
    cin>>n;
    int arr[n];
    sum=0,j=0;
    for (i=0;i<n;i++)
      cin>>arr[i];
    for(i=0;i<n;i++){
        j++;
        if(j<n)
          sum+=abs(arr[i]-arr[j]);
        else
          break;
    }
    sum+=abs(arr[n-1]-arr[0]);
    cout<<sum<<"\n ";
  }
  return 0;
}