#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long total = accumulate(a.begin(), a.end(), 0LL);
    if (total % n != 0) {
        cout << "NO\n";
        return;
    }
    long long target = total / n;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > target) {
            cout << "NO\n";
            return;
        }
        sum += a[i];
        if (sum > target * (i + 1)) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
