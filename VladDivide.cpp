#include <iostream>
#include <vector>

using namespace std;

bool isTriangle(const vector<vector<int>>& grid) {
  int n = grid.size();

  // Check for triangle downwards
  for (int i = 0; i < n; ++i) {
    int count = 0;
    int center = n / 2;
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == 1) {
        count++;
        if (i != 0 && j != center && abs(j - center) != count - 1) {
          return false;
        }
      }
    }
    if (count > 1 && 2 * count - 1 == n) {
      return true;
    }
  }

  // Check for triangle upwards (reverse the logic from downwards check)
  for (int i = n - 1; i >= 0; --i) {
    int count = 0;
    int center = n / 2;
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == 1) {
        count++;
        if (i != n - 1 && j != center && abs(j - center) != count - 1) {
          return false;
        }
      }
    }
    if (count > 1 && 2 * count - 1 == n) {
      return true;
    }
  }

  return false;
}

bool isSquare(const vector<vector<int>>& grid) {
  int n = grid.size();

  // Check if all rows have the same number of 1s
  int count = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == 1) {
        count++;
      }
    }
    if (i > 0 && count != grid[0].size()) {
      return false;
    }
  }

  // Check if all columns have the same number of 1s
  for (int j = 0; j < n; ++j) {
    count = 0;
    for (int i = 0; i < n; ++i) {
      if (grid[i][j] == 1) {
        count++;
      }
    }
    if (j > 0 && count != grid[0][0]) {
      return false;
    }
  }

  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        cin >> grid[i][j];
      }
    }

    if (isSquare(grid)) {
      cout << "SQUARE" << endl;
    } else if (isTriangle(grid)) {
      cout << "TRIANGLE" << endl;
    } else {
      cout << "INVALID" << endl; // handle invalid cases if needed
    }
  }

  return 0;
}