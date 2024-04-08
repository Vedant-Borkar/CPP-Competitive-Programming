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
    cin>>n;int c,d;int mat[n][n],s=n*n;
    cin>>c;
    cin>>d;count=0;
    int arr[s],arr2[s];
    for(i=0;i<s;i++)
      cin>>arr[i];
    mat[0][0]=arr[0];
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        mat[i][j+1]=mat[i][j]+d;
      }
      mat[i+1][0]=mat[i][0]+c;
    }
    int k=0;
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        if(arr[k++]!=mat[i][j])
          count=5;break;
      }
    }
    // // for(i=0;i<n;i++){
    // //   for(j=0;j<n;j++){
    // //     cout<<mat[i][j]<<" ";
    // //   }
    // //   cout<<"\n";
    // // }
    // for(i=0;i<s;i++)
    //   cout<<arr[i]<<" ";
    // 
    if(count>0)
      cout<<"NO\n";
    else
      cout<<"YES\n";
  }
  return 0;
}