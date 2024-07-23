#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        unordered_map<int, int> count_map;

        for (int i = 0; i < n; ++i) {
            count_map[a[i]]++;
        }

        bool alice_wins = false;
        for (const auto& pair : count_map) {
            if (pair.second % 2 == 1) {
                alice_wins = true;
                break;
            }
        }

        if (alice_wins) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
