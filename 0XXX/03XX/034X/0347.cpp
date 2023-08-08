#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
        std::map<int, int> M;
        for (int n : nums) M[n]++;

        std::vector<std::pair<int, int>> V;
        for (std::pair<int, int> p : M) V.push_back({p.second, p.first});
        std::sort(V.begin(), V.end());

        std::vector<int> R(k);
        for (int i = 0; i < k; i++) R[i] = V[V.size()-i-1].second;
        return R;
    }
};
