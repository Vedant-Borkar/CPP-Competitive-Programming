#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int coins = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '@') {
                coins++;
            }
            if(i < n-1 && s[i] == '*' && s[i+1] == '*') {
                break;
            }
        }
        cout << coins << "\n";
    }
    return 0;
}
