//Problem:https://algochief.com/start?ques-id=1015&id=103
//Name:Plus Minus Maximum
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t;
  cin>>t;
  while(t-->0){
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
    sort(arr,arr+n);
    int sum1=0,sum=0;
    for(i=0;i<n;i++){
      sum+=arr[n-i-1]-arr[i];
      if(sum>sum1)
        sum1=sum;
      else if(arr[n-i-1]>=arr[i]){
        sum1+=arr[n-i-1];
      }
      else
        break;
    }
    cout<<sum1<<"\n";
  }
  return 0;
}