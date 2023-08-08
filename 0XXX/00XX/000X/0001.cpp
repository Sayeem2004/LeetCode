#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        std::vector<std::array<int, 2>> S(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            S[i][0] = nums[i];
            S[i][1] = i;
        }
        std::sort(S.begin(), S.end());

        std::vector<int> R;
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (S[i][0]+S[j][0] == target) {
                R.push_back(S[i][1]);
                R.push_back(S[j][1]);
                break;
            } else if (S[i][0]+S[j][0] < target) i++;
            else j--;
        }

        return R;
    }
};
