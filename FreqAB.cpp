//Problem:https://codeforces.com/contest/1926/problem/A
//Name:A. Vlad and the Best of Five
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,sum=0,arr[n];
  cin>>t;
  while(t-->0){
    j=0;k=0;
   string s;
   cin>>s;
   for(i=0;i<s.length();i++){
    if(s.at(i)=='A')
      j++;
    else
      k++;
   }
   if(j>k)
      cout<<"A\n";
    else  
      cout<<"B\n";
  }
  return 0;
}