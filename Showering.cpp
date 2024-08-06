//Problem:https://codeforces.com/contest/1999/problem/C
//Name:C. Showering
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,j,k,t,sum=0;
  cin>>t;
  while(t-->0){
    long long n,s,m;
    cin>>n>>s>>m;
    long long start = 0;
    bool flag = false;
    while(n-- ) {
        int l, r; cin >> l >> r;
        if ((l - start) >= s) flag = true;
        start = r;
    }
    if (flag == true ||  m-start >= s) {
        cout << "YES\n";
    }
    else  cout << "NO\n";
  }
  return 0;
}