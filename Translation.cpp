//problem:https://codeforces.com/problemset/problem/41/A
//Name:Translation
//Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  string s="";
  string t="";
  cin>>s;
  cin>>t;
  reverse(s.begin(),s.end());
  if(t==s)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}