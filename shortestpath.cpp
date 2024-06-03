//Problem:https://codeforces.com/problemset/problem/1547/A
//Name:A. Shortest Path with Obstacle
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,sum=0;
  cin>>t;
  while(t-->0){
    int count=0;
    int d;
    int arr[6];
    for(i=0;i<6;i++){
      cin>>arr[i];
    }
    if((arr[0]==arr[2] && arr[2]==arr[4] && min(arr[1], arr[3]) < arr[5] && arr[5] < max(arr[1], arr[3]))||(arr[1]==arr[3] && arr[3]==arr[5] && min(arr[0], arr[2]) < arr[4] && arr[4] < max(arr[0], arr[2]))){
      count++;
    }
    d=abs(arr[0]-arr[2])+abs(arr[1]-arr[3]);
    if(count>0)
      cout<<(d+2)<<"\n";
    else
      cout<<d<<"\n";
  }
  return 0;
}