#include<bits/stdc++.h>

using namespace std;

int minimum_moves(const vector<string>& instruct) {
    vector<string> directions = {"up", "down", "left", "right"};
    int s = instruct.size();

    vector<vector<vector<int>>> dp(s + 1, vector<vector<int>>(4, vector<int>(4, INT_MAX)));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dp[0][i][j] = 0;
        }
    }

    for (int k = 1; k <= s; k++) {
        int instr_idx = find(directions.begin(), directions.end(), instruct[k - 1]) - directions.begin();
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (dp[k - 1][i][j] != INT_MAX) {
                    if (instr_idx == i || instr_idx == j) {
                        dp[k][i][j] = min(dp[k][i][j], dp[k - 1][i][j]);
                    } else {
                        dp[k][i][j] = min({dp[k][i][j], dp[k - 1][instr_idx][j] + 1, dp[k - 1][i][instr_idx] + 1});
                    }
                }
            }
        }
    }

    int minimum_moves = INT_MAX;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            minimum_moves = min(minimum_moves, dp[s][i][j]);
        }
    }

    return minimum_moves;
}

int main() {
    int m;
    cin >> m;
    vector<string> instruct(m);
    for (int i = 0; i < m; i++) {
        cin >> instruct[i];
    }
    int result = minimum_moves(instruct);
    cout << result << endl;
    return 0;
}
