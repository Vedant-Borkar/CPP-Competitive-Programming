#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

int shortestSpecialSubarray(vector<int>& nums, int k) {
    int n = nums.size();
    int min_length = numeric_limits<int>::max();
    int left = 0, or_result = 0;
    bool found = false; // Flag to check if any element in nums is already k or greater
    
    for (int right = 0; right < n; ++right) {
        or_result |= nums[right];
        if (nums[right] >= k) {
            min_length = 1; // If any element is already k or greater, then the shortest special subarray length is 1
            found = true;
            break;
        }
    }
    
    if (!found) {
        for (int right = 0; right < n; ++right) {
            or_result |= nums[right];
            while (or_result >= k) {
                min_length = min(min_length, right - left + 1);
                or_result &= ~nums[left++];
            }
        }
    }
    
    return min_length == numeric_limits<int>::max() ? -1 : min_length;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    
    int result = shortestSpecialSubarray(nums, k);
    cout << "Length of the shortest special subarray: " << result << endl;
    
    return 0;
}
