//Problem:
//Name:
//Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
#include<cmath>
#define ll = long long;
using namespace std;
int main(){
  int count=0;
  vector<char> c;
  char arr[5]={'a','e','i','o','u'};
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++){
    c.push_back(s.at(i));
  } 
  for(char j: arr){
    if(c[0]==j)
      count++;
  }
  if(count==0)
    c.insert(c.begin(),'.');
  else
    c.erase(c.begin());
  for(int i=0;i<c.size();i++){
    for(char j : arr){
      if(c[i]!=j)
        c.insert(c.begin()+(i-1),'.');
      if(c[i]==j)
        c.erase(c.begin()+i);
    }
  }
  for(char i:c)
    cout<<i;
  return 0;
}