#include <bits/stdc++.h>

class Solution {
public:
    int repeatedNTimes(std::vector<int> &nums) {
        std::unordered_map<int, int> UM;
        for (int i = 0; i < nums.size(); i++) {
            if (UM[nums[i]]) return nums[i];
            else UM[nums[i]]++;
        }
        return nums[nums.size() - 1];
    }
};
