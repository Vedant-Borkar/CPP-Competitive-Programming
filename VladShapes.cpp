//Problem:https://codeforces.com/contest/1926/problem/B
//Name:B. Vlad and Shapes
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
bool isSquare(int n){
  int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin>>arr[i][j];
      }
    }
   bool square=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(arr[i][j]==1){
            if(arr[i][j+1]!=1 && arr[i+1][j]==1){
                square=false;
                return square;
              }else if(arr[i][j+1]==1 && arr[i+1][j]!=1){
                square=false;
                return square;
              }
              else
                return square;
          }
        }
    }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,count1=0,sum=0;
  cin>>t;
  while(t-->0){
    cin>>n;
    bool square = isSquare(n);
    if(square==true)
      cout<<"SQUARE\n";
    else
    cout<<"TRIANGLE\n";
  }
  return 0;
}
/**
 * 
*/
/**
 * if(count>0){
          if(arr[i][j]==1){
            count1++;break;
          }
        }
         else if(arr[i][j]==1){
            count++;
          }
*/