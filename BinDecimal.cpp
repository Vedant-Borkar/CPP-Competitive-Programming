#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a number is fully composed of 1 and 0
bool isBinary(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1)
            return false;
        n /= 10;
    }
    return true;
}

// Function to check if a number is composed of products of specific binary numbers
bool isProductOfBinary(int n) {
    vector<int> binaryNumbers = {11, 101, 10, 111, 1101, 1011, 1001, 1110};

    string numStr = to_string(n);
    vector<bool> dp(numStr.length() + 1, false);
    dp[0] = true;

    for (int i = 0; i < numStr.length(); ++i) {
        if (!dp[i])
            continue;
        for (int binary : binaryNumbers) {
            string binaryStr = to_string(binary);
            int len = binaryStr.length();
            if (i + len <= numStr.length() && numStr.substr(i, len) == binaryStr)
                dp[i + len] = true;
        }
    }

    return dp[numStr.length()];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num;
        cin >> num;
        
        if (isBinary(num) || isProductOfBinary(num))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
