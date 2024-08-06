//Problem:https://codeforces.com/contest/1999/problem/B
//Name:B. Card Game
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
    int a, b, x, y;
    cin>>a>>b>>x>>y; 
    for(i=0;i<2;i++)
    {
        if ((a > x && b >= y) || (a >= x && b > y))
        {
            count++;
        }
        if ((a > y && b >= x) || (a >= y && b > x))
        {
            count++;
        }
    }
    cout<<count<<"\n";
  }
  return 0;
}