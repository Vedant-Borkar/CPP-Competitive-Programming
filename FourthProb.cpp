#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int mostFrequentDuplicate(const vector<int>& nums) {
    unordered_map<int, int> frequency;
    int maxDuplicate = 0;
    for (int number : nums) {
        frequency[number]++;
        if (frequency[number] >= 2) {
            maxDuplicate = max(maxDuplicate, number);
        }
    }
    return maxDuplicate;
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int size;
        cin >> size;
        vector<int> numbers(size);
        for (int i = 0; i < size; i++) {
            cin >> numbers[i];
        }
        long long totalSum = 0;
        bool allZeros = false;
        while (!allZeros) {
            long long currentSum = 0;
            for (int number : numbers) {
                currentSum += number;
            }
            totalSum += currentSum;
            vector<int> temp(size);
            for (int i = 0; i < size; i++) {
                temp[i] = mostFrequentDuplicate(vector<int>(numbers.begin(), numbers.begin() + i + 1));
            }
            allZeros = true;
            for (int i = 0; i < size; i++) {
                numbers[i] = temp[i];
                if (numbers[i] != 0) {
                    allZeros = false;
                }
            }
        }
        cout << totalSum << endl;
    }
    return 0;
}
