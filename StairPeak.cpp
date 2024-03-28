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
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a<b && b<c)
      cout<<"STAIR\n";
    else if(a<b && b>c)
      cout<<"PEAK\n";
    else
      cout<<"NONE\n";
  }
  return 0;
}