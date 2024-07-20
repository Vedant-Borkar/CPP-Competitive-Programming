//Problem:https://codeforces.com/contest/1560/problem/A
//Name: A. Dislike of Threes
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j=0,k,t,sum=0;
  cin>>t;int arr[2000];
  for(i=1;i<=2000;i++){
    if(i%10!=3 && i%3!=0)
      arr[j++]=i;
  }
  while(t-->0){
    int count=0;j=0;
    cin>>n;
    cout<<arr[n-1]<<"\n";
  }
  return 0;
}