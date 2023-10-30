Forming a Magic Square
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to calculate the cost of converting matrix s into a magic square
int formingMagicSquare(vector<vector<int>> s) {
    // All possible 3x3 magic squares
    vector<vector<vector<int>> > magicSquares = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}
    };

    int minCost = INT_MAX;

    // For each magic square, calculate the cost to transform s into it
    for (const auto &magic : magicSquares) {
        int cost = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cost += abs(s[i][j] - magic[i][j]);
            }
        }
        minCost = min(minCost, cost);
    }

    return minCost;
}

int main() {
    vector<vector<int>> s(3, vector<int>(3));

    // Input the 3x3 matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }
    }

    int result = formingMagicSquare(s);
    cout << result << endl;

    return 0;
}
