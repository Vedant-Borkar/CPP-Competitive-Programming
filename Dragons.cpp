//Problem:https://codeforces.com/problemset/problem/230/A
//Name: Dragons
//Author:Vedant Borkar
#include<iostream>  
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#define ll = long long;
using namespace std;
int main(){
  int i,n,j,key,key1,t,count=0,sum=0,s;
  cin>>s;
  cin>>n;
  int arr[n],arry[n];for(i=0;i<n;i++){
    cin>>arr[i];
    cin>>arry[i];
  }
  for (i = 1; i < n; i++) {
        key = arr[i];
        key1=arry[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            arry[j + 1] = arry[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        arry[j+1]=key1;
  }
  for( i=0;i<n;i++){
    if(s>arr[i]){
      s+=arry[i];
    }else{
      count++; break;
    }
  }
  if(count>0)
    cout<<"NO";
  else  
    cout<<"YES";
  return 0;
}