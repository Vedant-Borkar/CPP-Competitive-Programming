#include<bits/stdc++.h>
using namespace std;
bool isHappy(long long n) {
        long long sum=0,count=0;
        while(sum!=1 && count<1000000){
            while(n>0){
                sum=(n%10)*(n%10);
                n=n/10;
            }
            n=sum;count++;
        }
        if(sum==1)
            return true;
        else
            return false;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin>>n;
  isHappy(n);
  return 0;
}
