//Problem:https://codeforces.com/contest/1926/problem/C
//Name:C. Vlad and a Sum of Sum of Digits
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int Sum(int n){
  int summ=0;
  while(n>0){
    summ=summ+n%10;
    n=n/10;
  }
  return summ;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,n,j,k,t,count=0,sum=0;
  cin>>t;
  while(t-->0){
    cin>>n;
    int arr[n];
    long long max=0;
    for(i=1;i<=n;i++){
      arr[i]=Sum(i);
    }
    for(i=1;i<=n;i++){
      max+=arr[i];
    }
    cout<<max<<"\n";
  }
  return 0;
}