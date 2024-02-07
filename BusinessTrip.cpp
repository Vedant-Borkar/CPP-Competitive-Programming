//Problem:https://codeforces.com/problemset/problem/149/A
//Name: Business Trip
//Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int k;
  cin>>k;
  int arr[12];
  for(int i=0;i<12;i++){
    cin>>arr[i];
  }
  sort(arr,arr+12); int count=0,sum=0,i=11;
  while(sum<k && i>=0){
    sum+=arr[i--];count++;
  }
  if(sum>=k)
    cout<<count;
  else 
    cout<<"-1";
  return 0;
}