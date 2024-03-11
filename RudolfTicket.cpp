//Problem:https://codeforces.com/contest/1941/problem/A
//Name:A. Rudolf and the Ticket
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,m,t,count=0,sum=0;
  cin>>t;
  while(t-->0){
    cin>>n;
    cin>>m;
    cin>>k;
    int l[n],r[m];
    for(i=0;i<n;i++)
      cin>>l[i];
    for(i=0;i<m;i++)
      cin>>r[i];
    sort(l,l+n);
    sort(r,r+m);
    count=0;
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        if((l[i]+r[j])<=k)
          count++;
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}