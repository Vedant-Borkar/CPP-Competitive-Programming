//Problem:https://codeforces.com/problemset/problem/69/A
//Name:Young Physicist
//Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
#include<cmath>
#define ll = long long;
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n][3];
  for(int i=0;i<n;i++){
    cin>>arr[i][0];
    cin>>arr[i][1];
    cin>>arr[i][2];
  }
  int sumX=0,sumY=0,sumZ=0;
  for(int i=0;i<n;i++){
    sumX+=arr[i][0];
    sumY+=arr[i][1];
    sumZ+=arr[i][2];
  }
  if((sumX==0) && (sumY==0) && (sumZ==0))
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}