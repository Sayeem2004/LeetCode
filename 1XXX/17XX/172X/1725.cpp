#include <bits/stdc++.h>

class Solution {
public:
    int countGoodRectangles(std::vector<std::vector<int>> &RECT) {
        int MX = 0, CNT = 0, N = RECT.size();

        for (int i = 0; i < N; i++) {
            int SZ = std::min(RECT[i][0], RECT[i][1]);
            if (SZ > MX) { MX = SZ; CNT = 1; }
            else if (SZ == MX) { CNT++; }
        }

        return CNT;
    }
};
