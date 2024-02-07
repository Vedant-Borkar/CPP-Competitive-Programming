//Problem:
//Name:
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
  while(sum<k){
    sum+=arr[i--];count++;
  }
  cout<<count;
  return 0;
}