//Problem:https://codeforces.com/contest/1948/problem/A
//Name:A. Special Characters
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double i,n,j,k,t,count=0,sum=0;
  cin>>t;
  while(t-->0){
    string s="";
    int n;
    cin>>n;
    	if(n % 2 != 0) {
    		cout<<"NO\n";
    	}else{
    	  cout<<"YES\n";
        for(int i=0;i<n/2;i++) {
          cout<<((char)(i + 65));
          cout<<((char)(i + 65));
        }
        cout<<"\n";
      }
  }
  return 0;
}
//  if(toggle++%3!=0)
//           s+="A";
//         else if(toggle++%3!=0)
//           s+="BB";
//       }
//       cout<<"YES"<<"\n"<<s<<"\n";
//       }
//       else if(n==2){
//         cout<<"YES\nAA\n";
//       }
//       else{
//         cout<<"NO\n";
//       }