#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        bool ok = false;

        if (a.find("111") != string::npos) {
            ok = true;
        }

        int count11 = 0;
        for (size_t i = 0; i < a.size() - 1; ++i) {
            if (a[i] == '1' && a[i + 1] == '1') {
                count11++;
            }
        }
        if (count11 >= 2) {
            ok = true;
        }

        if (count11 >= 1 && (a[0] == '1' || a[n - 1] == '1')) {
            ok = true;
        }

        if (a[0] == '1' && a[n - 1] == '1') {
            ok = true;
        }

        if (ok) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
