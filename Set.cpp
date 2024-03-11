#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> freq(1e5+5, 0);
    for(int i=0; i<n; i++) freq[a[i]]++;
    vector<int> dp(1e5+5, 0);
    dp[1] = freq[1];
    for(int i=2; i<=1e5; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + i*freq[i]);
    }
    cout << dp[1e5] << endl;
    return 0;
}
