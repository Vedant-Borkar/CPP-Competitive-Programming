#include<bits/stdc++.h>
using namespace std;

long long solve(long long n) {
    long long res = 0;
    while(n > 0) {
        res += (n % 10) * (n % 10 + 1) / 2;
        n /= 10;
    }
    return res * 45;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        cout << solve(n) << "\n";
    }

    return 0;
}
