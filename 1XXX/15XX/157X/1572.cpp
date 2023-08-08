#include <bits/stdc++.h>

class Solution {
public:
    int diagonalSum(std::vector<std::vector<int>> &MAT) {
        int SM = 0, N = MAT.size();

        for (int i = 0; i < N; i++) {
            SM += MAT[i][i];
            if (i*2+1 == N) continue;
            SM += MAT[N-i-1][i];
        }

        return SM;
    }
};
