//Problem:https://codeforces.com/problemset/problem/43/A
//Name:A. Football
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k=0,t,count=0,sum=0;
  cin>>t;string str1,str2;cin>>str1;j++;
  for(i=0;i<t-1;i++){
    cin>>str2;if(str2==str1){
      j++;}
      else
        k++;}
  if(j>k) cout<<str1;
  else cout<<str2;
  return 0;
}