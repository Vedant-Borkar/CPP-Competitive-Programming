#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        long long year = 0;
        for(int i=0; i<n; i++) {
            year = ((year + a[i] - 1) / a[i]) * a[i];
        }
        cout << year << "\n";
    }
    return 0;
}
