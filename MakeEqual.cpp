#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total += a[i];
    }
    if (total % n != 0) {
        cout << "NO" << "\n";
        return;
    }
    int target = total / n;
    if (a[0] < target) {
        cout << "NO" << "\n";
        return;
    } else {
        for (int i = 0; i < n - 1; ++i) {
            int s = 0;
            if (a[i] < target) {
                cout << "NO" << "\n";
                return;
            } else if (a[i] == target) {
                continue;
            } else {
                s = a[i] - target;
                a[i] = target;
                for (int j = i + 1; j < n; ++j) {
                    if (a[j] < target) {
                        while (a[j] != target && s != 0) {
                            a[j] += 1;
                            s -= 1;
                        }
                    }
                }
            }
        }
        cout << "YES" << "\n";  
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}
