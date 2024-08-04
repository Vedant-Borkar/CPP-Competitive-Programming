//Problem:https://codeforces.com/contest/1993/problem/B
//Name: B. Parity and Sum
//Author:Vedant Borkar
#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int ini() {
    int x;
    cin >> x;
    return x;
}

vector<long long> in(int n) {
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    return a;
}

void pl(long long x) {
    cout << x << endl;
}

void fill(map<long long, long long>& m, long long x) {
    m[x]++;
}

void remove(map<long long, long long>& m, long long x) {
    if (--m[x] == 0) {
        m.erase(x);
    }
}

void solve() {
    int n = ini();
    vector<long long> a = in(n);
    long long count1 = 0, count2 = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            count1++;
        } else {
            count2++;
        }
    }
    if (count1 == 0 || count2 == 0) {
        pl(0);
        return;
    }

    priority_queue<long long> odd;
    map<long long, long long> even;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 != 0) {
            odd.push(a[i]);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            fill(even, a[i]);
        }
    }

    long long ans = 0;
    while (!even.empty()) {
        long long lowest = even.begin()->first;
        long long highest = odd.top();
        if (highest > lowest) {
            remove(even, lowest);
            lowest += highest;
            odd.push(lowest);
            ans++;
            continue;
        } else {
            lowest = even.rbegin()->first;
            remove(even, lowest);
            ans += 2;
            highest += lowest;
            lowest += highest;
            odd.pop();
            odd.push(highest);
            odd.push(lowest);
        }
    }
    pl(ans);
}

int main() {
    int t = 1;
    t = ini();
    while (t-- > 0) solve();
    return 0;
}