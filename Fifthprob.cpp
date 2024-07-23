#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
int MAD(const vector<int>& a){
  unordered_map<int,int> freq;
  int mad=0;
  for(int num:a){
    freq[num]++;
    if(freq[num]>=2){
      mad=max(mad,num);
    }
  }return mad;
}
int main(){
  int t;
  cin>>t;
  while(t-->0){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    long long sum=0;
    bool allz=false;
    while(!allz){
      long long current=0;
      for(int num:a){
        current+=num;
      }
      sum+=current;
      vector<int> b(n);
      for(int i=0;i<n;i++){
        b[i]=MAD(vector<int> (a.begin(),a.begin()+i+1));
      }
      allz=true;
      for(int i=0;i<n;i++){
        a[i]=b[i];
        if(a[i]!=0){
          allz=false;
        }
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}