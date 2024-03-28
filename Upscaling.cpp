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
    cin>>n;
    int toggle=0;
    for(i=0;i<n*2;i++){
      for(j=0;j<n*2;j++){
        if(toggle%2==0)
          cout<<"##";
        else
          cout<<"**";
        toggle++;
      }
      cout<<"\n";
    }
  }
  return 0;
}