#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        string s;
        cin >> s;
        vector<int> b(n);
        int product = 1;
        for(int i=0; i<n; i++) {
            product = (product * a[i]) % m;
            b[i] = product;
            if(s[i] == 'L') a.erase(a.begin());
            else a.pop_back();
        }
        for(int i=0; i<n; i++) cout << b[i] << " ";
        cout << "\n";
    }
    return 0;
}
