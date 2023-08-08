#include <bits/stdc++.h>

class Solution {
public:
    int subsetXORSum(std::vector<int> &NUMS) {
        int SM = 0, N = NUMS.size();

        for (int i = 0; i < (1 << N); i++) {
            int CURR = 0;
            for (int q = 0; q < N; q++) {
                if (i & (1 << q)) CURR ^= NUMS[q];
            }
            SM += CURR;
        }

        return SM;
    }
};
