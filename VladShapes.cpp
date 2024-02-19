//Problem:https://codeforces.com/contest/1926/problem/B
//Name:B. Vlad and Shapes
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
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          cin>>arr[i][j];
      }
    }
    bool square=true;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          if(arr[i][j]==1){
            if(arr[i][j+1]==1){
              square=true;
            }
            else
            square=false;
          }
        }
    }
    if(square)
      cout<<"SQUARE";
    else
    cout<<"TRIANGLE";
  }
  return 0;
}