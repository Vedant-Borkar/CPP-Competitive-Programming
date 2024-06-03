//Problem:https://codeforces.com/contest/1980/problem/B
//Name:B. Choosing Cubes
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
    int count=0,f,k;
    cin>>n;
    cin>>f;
    cin>>k;
    int arr[n],temp[n];
    for(i=0;i<n;i++){
      cin>>arr[i];
      temp[i]=arr[i];
    }
    int fav=arr[f-1];
    sort(arr, arr + n, greater<int>());
    int flag1=0,flag2=0;
    for(int i=0;i<k;i++)
      if(arr[i]==fav)
        flag1=1;
    for(int i=k;i<n;i++)
      if(arr[i]==fav)
        flag2=1;
    if(flag1 && !flag2) cout<<"YES\n";
    else if(!flag1) cout<<"NO\n";
    else cout<<"MAYBE\n";
  }
  return 0;
}
// }
//  if(arr[k-1]<fav)
//       cout<<"YES\n";
//     else if(arr[k-1]==fav)
//       cout<<"MAYBE\n";
//     else
//       cout<<"NO\n";