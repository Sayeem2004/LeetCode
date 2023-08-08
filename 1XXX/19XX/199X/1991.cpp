#include <bits/stdc++.h>

class Solution {
public:
    int findMiddleIndex(std::vector<int> &NUMS) {
        int SM = 0, N = NUMS.size();
        for (int i = 0; i < N; i++) SM += NUMS[i];

        int PREF = 0;
        for (int i = 0; i < N; i++) {
            if (PREF == SM - PREF - NUMS[i]) return i;
            PREF += NUMS[i];
        }

        return -1;
    }
};
