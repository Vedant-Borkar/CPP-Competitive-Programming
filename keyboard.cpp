//Problem:https://codeforces.com/problemset/problem/474/A
//Name: Keyboard
//Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  char arr[3][10]={{'q','w','e','r','t','y','u','i','o','p'},{'a','s','d','f','g','h','j','k','l',';'},{'z','x','c','v','b','n','m',',','.','/'}};
  char c;
  cin>>c;
  string s,t="";
  cin>>s;
  for(int k=0;k<s.length();k++){
    if(c=='R'){
      for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
          if(s.at(k)==arr[i][j] && j!=0 )
            t=t+arr[i][j-1];
          else if(s.at(k)==arr[i][j] && i!=0)
            t=t+arr[i-1][0];
        }
      }
    }
    else{
      for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
          if(s.at(k)==arr[i][j] && j!=9 )
            t=t+arr[i][j+1];
          else if(s.at(k)==arr[i][j])
            t=t+arr[i+1][0];
        }
      }
    }
  }
  cout<<t;

  return 0;
}