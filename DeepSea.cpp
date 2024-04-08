//Problem:
//Name:
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,t,sum=0;
  cin>>t;
  long long int k;
  while(t-->0){
    cin>>n;
    cin>>k;int count=0,toggle=0;
    vector <int> arr;
    for(i=0;i<n;i++){
      cin>>j;
      arr.push_back(j);
    }
    while(k>0){
      if(toggle++%2==0){
        arr[0]-=1;
        if(arr[0]==0){
          count++;
        arr.erase(arr.begin());
        }
      }else{
        arr[n-1]-=1;
        if(arr[n-1]==0){
          count++;n--;
          arr.pop_back();
        }
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}