#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Soln(vector<int> nums, int n) {
    vector<int> nums1 = nums;
    sort(nums1.begin(), nums1.end());
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != nums1[i]) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    Soln(l, n);
    return 0;
}
