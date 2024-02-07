//Problem:https://codeforces.com/contest/1927/problem/A
//Name: Make it White
//Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t-->0){
    cin>>n;
    string s; cin>>s;
    int first=-1,last=0;
    for(int i=0;i<n;i++){
      if(s.at(i)=='B' && first==-1){
        first=i;last=i;
      }else if(s.at(i)=='B'){
        last=i;
      }
    }
    cout<<(last-first+1)<<endl;
  }
  return 0;
}