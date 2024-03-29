#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a substring starting from index 'start' of length 'len' matches with the given pattern
bool isValidSubstring(const string& s, int start, int len, const string& pattern) {
    for (int i = 0; i < len; ++i) {
        if (s[start + i] != pattern[i] && pattern[i] != '*') // '*' denotes the ignored character
            return false;
    }
    return true;
}

// Function to find all factors of a number
vector<int> findFactors(int n) {
    vector<int> factors;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i)
                factors.push_back(n / i);
        }
    }
    return factors;
}

// Function to find the length of the shortest string k
int findShortestSubstring(const string& s) {
    int n = s.length();
    vector<int> factors = findFactors(n);
    int minLen = n;
    for (int factor : factors) {
        if (factor == 1) continue; // Ignore factor 1
        for (int i = 0; i <= n - factor; ++i) {
            string substr = s.substr(i, factor);
            bool valid = true;
            for (int j = 0; j < n; j += factor) {
                if (!isValidSubstring(s, j, factor, substr)) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                minLen = min(minLen, factor);
                break; // Break early if a match is found for this factor
            }
        }
    }
    return minLen;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int shortestLength = findShortestSubstring(s);
        cout << shortestLength << endl;
    }
    return 0;
}
