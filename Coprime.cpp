//Problem:https://codeforces.com/problemset/problem/1742/D
//Name: Coprime
//Author:Vedant Borkar
#include<bits/stdc++.h>
using namespace std;
int coprime(int n, int max) {
    vector<int> l(n);
    for(int i=0; i<n; i++)
        cin >> l[i];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(__gcd(l[i],l[j])==1) {
                if((i+j)>max)
                    max=i+j;
            }
        }
    }
    if(max>-1)
        cout << max+2 << "\n";
    else
        cout << "-1" << "\n";
    return 0;
}
int main() {
    int t,n;
    cin >> t;
    while(t--) {cin>>n;
        coprime(n,-1);
    }
    return 0;
}
