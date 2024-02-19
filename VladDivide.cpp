#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> grid(n);
        for(int i=0; i<n; i++)
            cin >> grid[i];
        
        bool isSquare = true;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == '1') {
                    if(i+1<n && j+1<n && grid[i+1][j] == '1' && grid[i][j+1] == '1' && grid[i+1][j+1] == '1') {
                        isSquare = false;
                        break;
                    }
                }
            }
            if(!isSquare)
                break;
        }
        cout << (isSquare ? "SQUARE" : "TRIANGLE") << endl;
    }
    return 0;
}
