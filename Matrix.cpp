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
    int n, c, d;
    cin >> n >> c >> d;

    vector<long long> a(n * n);
    for (int i = 0; i < n * n; ++i){
        cin >> j;
        a.push_back(j);
    }
    sort(a.begin(),a.begin());

    multiset<int> set(a.begin(), a.end());
    vector<vector<long long>> arr(n, vector<long long>(n));
    arr[0][0] = a[0];
    set.erase(set.find(arr[0][0]));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0)
                continue;
            if (j > 0 && set.count(arr[i][j - 1] + c)) {
                set.erase(set.find(arr[i][j - 1] + c));
                arr[i][j] = arr[i][j - 1] + c;
            } else if (i > 0 && set.count(arr[i - 1][j] + d)) {
                set.erase(set.find(arr[i - 1][j] + d));
                arr[i][j] = arr[i - 1][j] + d;
            } else {
                cout<<"NO\n";
            }
        }
    }

    if (!set.size())
        cout<<"YES\n";
    else
        cout<<"NO\n";
  }
  return 0;
}
// cin>>n;int c,d;int mat[n][n],s=n*n;
//     cin>>c;
//     cin>>d;count=0;
//     vector<int> arr;
//     for(i=0;i<s;i++){
//       cin>>sum;
//       arr.push_back(sum);
//     }
//     sort(arr.begin(),arr.end());
//     mat[0][0]=arr[0];
//     for(i=0;i<n;i++){
//       for(j=0;j<n;j++){
//         mat[i][j+1]=mat[i][j]+d;
//       }
//       mat[i+1][0]=mat[i][0]+c;
//     }
//     int k=0;
//     for(i=0;i<n;i++){
//       for(j=0;j<n;j++){
//         if(!binary_search(arr.begin(), arr.end(), mat[i][j])){
//           count=2;break;
//         } 
//         }
//       }
    
//     for(i=0;i<n;i++){
//       for(j=0;j<n;j++){
//         cout<<mat[i][j]<<" ";
//       }
//       cout<<"\n";
//     }
//     for(i=0;i<s;i++)
//       cout<<arr[i]<<" ";
    
//     if(count>0)
//       cout<<"NO\n";
//     else
//       cout<<"YES\n";