//Problem:
//Name:
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
    int q;
    cin>>k;
    cin>>q;
    int arr1[k],arr2[q];
    for(i=0;i<k;i++)
      cin>>arr1[i];
    for(i=0;i<q;i++)
      cin>>arr2[i];
    for(i=0;i<q;i++){
      int out=arr1[0]-1;
      if(out>arr2[i])
        cout<<arr2[i]<<" ";
      else if(out<=arr2[i])
        cout<<out<<" ";
    }
    cout<<"\n";
  }
  return 0;
}