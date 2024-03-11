#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void find_second_smallest_and_second_largest(int n, vector<int>& arr, vector<int>& commands) {
    multiset<int> sorted_arr(arr.begin(), arr.end());
    auto it = sorted_arr.begin();

    for (int command : commands) {
        if (command == 1) {
            advance(it, 1);
            cout << *it << " ";
            sorted_arr.erase(it);
            it = sorted_arr.begin();
        } else if (command == 2) {
            advance(it, sorted_arr.size() - 2);
            cout << *it << " ";
            sorted_arr.erase(it);
            it = sorted_arr.begin();
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> commands(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> commands[i];
    }

    find_second_smallest_and_second_largest(n, arr, commands);

    return 0;
}
