//Problem:
//Name:A. Thorns and Coins
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
    string arr;
    cin>>arr;
    for(i=0;i<n-2;){
      if(arr.at(i+1)=='@'){
        i++;count++;}
      else if(arr.at(i+2)=='@'){
        i+=2;count++;}
      if(arr.at(i+1)=='*'){
        if(arr.at(i+2)=='*')
          break;
        else{
          if(arr.at(i+2)=='.')
            i+=2;
          else if(arr.at(i+2)=='@'){
            count++;i+=2;
          }
        }
      }
      else
        i++;
    }
    cout<<count<<"\n";  
    count=0;
  }
  return 0;
}