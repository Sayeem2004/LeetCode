#include <bits/stdc++.h>

class Solution {
public:
    double average(std::vector<int> &SAL) {
        long long SM = 0, MN = SAL[0], MX = SAL[0], N = SAL.size();
        if (N == 1) return SAL[0];

        for (int i = 0; i < N; i++) {
            SM += SAL[i];
            MN = std::min(MN, (long long) SAL[i]);
            MX = std::max(MX, (long long) SAL[i]);
        }

        return (double) (SM - MN - MX) / (double) (N - 2);
    }
};
