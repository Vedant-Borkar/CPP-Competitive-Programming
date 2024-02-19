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
    vector<string> arr(n);
    for(i=0;i<n;i++){
          cin>>arr[i];
      }
    bool square=true;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          if(arr[i][j]==1){
            if(i+1<n && j+1<n && arr[i+1][j] == '1' && arr[i][j+1] == '1'){
              square=true;
              break;
            }
            else
            square=false;
          }
        }
    }
    if(square==true)
      cout<<"SQUARE\n";
    else
    cout<<"TRIANGLE\n";
  }
  return 0;
}