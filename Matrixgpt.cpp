#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    vector<long long> arr(n * n);
    for (int i = 0; i < n * n; ++i)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    map<long long, long long> map;
    for (long long num : arr)
        map[num]++;
    
    vector<long long> ar;
    while (!map.empty()) {
        long long f = map.begin()->first;
        ar.push_back(f);
        long long key = f;
        map.erase(key);
        int l = 0;
        while (true) {
            if (l == n - 1) break;
            if (map.find(key + a) != map.end()) {
                map.erase(key + a);
                key += a;
                l++;
            } else
                break;
        }
    }

    if (!map.empty() || ar.size() != n) {
        cout << "no" << endl;
        return;
    }

    for (int i = 1; i < ar.size(); i++) {
        if (ar[i] - ar[i - 1] == b) {
            // Do nothing
        } else {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
}

int main() {
    int t;
    cin>>t;
    while (t-- > 0) 
        solve();
    return 0;
}
