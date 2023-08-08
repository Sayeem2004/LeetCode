#include <bits/stdc++.h>

class Solution {
public:
    int countNegatives(std::vector<std::vector<int>> &GRID) {
        int cnt = 0, N = GRID.size(), M = GRID[0].size();

        for (int i = 0; i < N; i++) {
            for (int q = 0; q < M; q++) {
                if (GRID[i][q] < 0) { cnt += M - q; break; }
            }
        }

        return cnt;
    }
};
