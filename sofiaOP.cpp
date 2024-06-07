#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void yes() {
    cout << "YES" << endl;
}

void no() {
    cout << "NO" << endl;
}

void fillmap(unordered_map<long long, long long>& map, vector<long long>& vec) {
    for(auto& val : vec) {
        map[val]++;
    }
}

void fill(unordered_map<long long, long long>& map, long long key) {
    map[key]++;
}

void remove(unordered_map<long long, long long>& map, long long key) {
    if(map.find(key) != map.end()) {
        map[key]--;
        if(map[key] == 0) {
            map.erase(key);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    int m;
    cin >> m;
    vector<long long> c(m);
    for(int i = 0; i < m; i++) cin >> c[i];
    
    unordered_map<long long, long long> map;
    fillmap(map, c);
    
    unordered_map<long long, long long> second;
    unordered_set<long long> done;
    for(int i = 0; i < n; i++) if(a[i] == b[i]) done.insert(b[i]);
    for(int i = 0; i < n; i++) if(a[i] != b[i]) fill(second, b[i]);
    
    unordered_map<long long, long long> already;
    unordered_set<long long> extra;
    for(auto& ele : done) if(map.find(ele) != map.end()) extra.insert(ele);
    
    for(int i = m - 1; i >= 0; i--) {
        remove(map, c[i]);
        if(map.find(c[i]) == map.end() && extra.find(c[i]) != extra.end()) extra.erase(c[i]);
        if(second.find(c[i]) != second.end()) {
            remove(second, c[i]);
            fill(already, c[i]);
            if(second.size() == 0) {
                yes();
                return;
            }
        } else if(done.find(c[i]) != done.end()) {
            fill(already, c[i]);
        } else if(already.size() == 0) {
            no();
            return;
        }
    }
    
    if(second.size() == 0) yes();
    else no();
}

int main() {
    solve();
    return 0;
}
