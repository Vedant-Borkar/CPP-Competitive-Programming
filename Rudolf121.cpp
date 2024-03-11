//Problem:
//Name:
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,sum=0;
  cin>>t;
  while(t-->0){
    cin>>n;
    long a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=n-2;i>0;i--){
        long dec=a[i+1];
        if(dec<0) continue;
        a[i+1]=0;
        a[i]-=2*dec;
        a[i-1]-=dec;
    }
    count=0;
    for(i=0;i<n;i++){
        if(a[i]!=0){
            cout<<"NO\n";
            count++;
            break;
        }
    }
    if(count==0)
    cout<<"YES\n";
  }
  return 0;
}