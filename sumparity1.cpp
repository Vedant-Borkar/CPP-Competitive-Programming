//Problem:https://codeforces.com/contest/1993/problem/B
//Name: B. Parity and Sum
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
void solve(){
  long long n;
  cin>>n;
  vector<long long> a(n);
  for(int i=0;i<n;i++) cin>>a[i];

  long long lo=0;
  long long le=0;
  for(int i=0;i<n;i++){
    if(a[i]%2==1 && a[i]>lo) lo=a[i];
    if(a[i]%2==0 && a[i]>le) le=a[i];
  }
  int c=0;
  bool parity=true;
  for(int i=1;i<n;i++){
    if(a[i]%2!=a[0]%2){
      parity=false;
      break;
    }
  }
  if(parity){
    cout<<0<<"\n";
    return;
  }

  sort(a.begin(),a.end());
  for(int i=0;i<n;i++){
    if(a[i]%2==0 && a[i]<lo){
      c++;
      a[i]=a[i]+lo;
      lo=max(lo,a[i]);
    }
  }
  parity=true;
  for(int i=1;i<n;i++){
    if(a[i]%2!=a[0]%2){
      parity=false;
      break;
    }
  }
  if(parity){
    cout<<c <<"\n";
    return;
  }
  long long ind=0;
  for(int i=0;i<n;i++){
    if(a[i]%2==1 && a[i]==lo){
      ind=i;
      break;
    }
  }
  a[ind]=lo+le;
  c++;
  for(int i=0;i<n;i++){
    if(a[i]%2==0){
      c++;
    }
  }
  cout<<c <<"\n";

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long t;
  while(t--){
    solve();
  }
  return 0;
}