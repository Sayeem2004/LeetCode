#include <bits/stdc++.h>

class Solution {
public:
    int jump(std::vector<int> &nums) {
        std::vector<int> ans(nums.size(),100000);
        ans[0] = 0;

        for (int i = 0; i < nums.size()-1; i++) {
            for (int q = i+1; q <= i+nums[i] && q < nums.size(); q++) {
                ans[q] = std::min(ans[i]+1,ans[q]);
            }
        }

        return ans[nums.size()-1];
    }
};
