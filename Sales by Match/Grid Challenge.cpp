#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string gridChallenge(vector<string>& grid) {
    // Sort each row alphabetically
    for (int i = 0; i < grid.size(); i++) {
        sort(grid[i].begin(), grid[i].end());
    }

    // Check if columns are in ascending order
    for (int col = 0; col < grid[0].size(); col++) {
        for (int row = 1; row < grid.size(); row++) {
            if (grid[row][col] < grid[row - 1][col]) {
                return "NO";
            }
        }
    }

    return "YES";
}

int main() {
    int t; // Number of test cases
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n; // Number of rows and columns
        cin >> n;

        vector<string> grid(n);

        for (int j = 0; j < n; j++) {
            cin >> grid[j];
        }

        string result = gridChallenge(grid);
        cout << result << endl;
    }

    return 0;
}
