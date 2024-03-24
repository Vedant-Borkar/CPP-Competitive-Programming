//Problem:https://algochief.com/start?ques-id=1011&id=103
//Name:Lex Minimum
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
    string arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
    string min=arr[0];
    for(i=1;i<n;i++){
      if(min.compare(arr[i])>0)
        min=arr[i];
    }
    cout<<min<<"\n";
  }
  return 0;
}