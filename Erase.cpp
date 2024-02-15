#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<string> a;string s;
  for(int i=0;i<5;i++){
    cin>>s;
    a.push_back(s);
  }
  a.erase(a.begin()+2);
  for(auto i:a){
    cout<<i<<"\n";
  }
  return 0;
}