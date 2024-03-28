#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool checkValidSubstring(const string& s, int len) {
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[i % len]) {
            return false;
        }
    }
    return true;
}

int findShortestSubstring(const string& s) {
    int n = s.length();
    int shortestLength = n; // initialize shortestLength to n
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (checkValidSubstring(s, i)) {
                shortestLength = min(shortestLength, i);
            }
            int factor = n / i;
            if (checkValidSubstring(s, factor)) {
                shortestLength = min(shortestLength, factor);
            }
        }
    }
    return shortestLength;
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
