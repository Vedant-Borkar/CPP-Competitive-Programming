#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int MAD(const vector<int>& arr) {
    unordered_map<int, int> count;
    int max_duplicate = 0;
    
    for (int num : arr) {
        count[num]++;
        if (count[num] >= 2) {
            max_duplicate = max(max_duplicate, num);
        }
    }
    
    return max_duplicate;
}

long long process_array(vector<int>& arr) {
    long long sum = 0;
    int n = arr.size();
    
    while (true) {
        bool all_zero = true;
        for (int num : arr) {
            if (num != 0) {
                all_zero = false;
                break;
            }
        }
        if (all_zero) break;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            b[i] = MAD(vector<int>(arr.begin(), arr.begin() + i + 1));
        }
        
        arr = b;
    }
    
    return sum;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << process_array(arr) << endl;
    }
    
    return 0;
}