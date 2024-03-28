#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if the given string can be constructed with repetition of substring of given length
bool isValidSubstring(const string& s, int len) {
    int n = s.length();
    for (int i = 0; i < len; ++i) {
        char c = s[i];
        for (int j = i; j < n; j += len) {
            if (s[j] != c && s[j] != '*') // '*' denotes the ignored character
                return false;
        }
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
        string substr = s.substr(0, factor);
        if (isValidSubstring(s, factor)) {
            minLen = min(minLen, factor);
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
