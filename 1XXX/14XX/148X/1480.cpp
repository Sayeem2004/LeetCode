#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int> &NUMS) {
        std::vector<int> PREF(NUMS.size());

        for (int i = 0; i < NUMS.size(); i++) {
            PREF[i] = NUMS[i];
            if (i > 0) PREF[i] += PREF[i-1];
        }

        return PREF;
    }
};
