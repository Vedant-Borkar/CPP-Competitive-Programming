//Problem:https://codeforces.com/problemset/problem/1/A
//Name: Theatre Square
//Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
#include<cmath>
#define ll = long long int;
using namespace std;
int main(){
  double n,m,a;
  cin>>n;
  cin>>m;
  cin>>a;
  long long int prod=ceil((n/a))*ceil((m/a));
  cout<<(prod);
  return 0;
}