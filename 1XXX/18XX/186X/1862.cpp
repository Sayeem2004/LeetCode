#include <bits/stdc++.h>

class Solution {
public:
    int sumOfFlooredPairs(std::vector<int> &nums) {
        std::map<int,int> M;
        int mx = 0, mod = 1e9+7;

        for (auto& x : nums) { M[x]++; mx = std::max(mx, x); }

        std::vector<int> P(mx+1);
        for (int i = 1; i <= mx; i++) P[i] = P[i-1] + M[i];

        long long ans = 0;
        for (auto x : M) {
            long long sm = 0, curr = x.first, i = 1;
            if (x.second == 0) continue;

            while (curr+x.first <= mx) {
                sm = (sm+(P[curr+x.first-1]-P[curr-1])*i) % mod;
                i++; curr += x.first;
            }

            sm = (sm+(P[mx]-P[curr-1])*i) % mod;
            ans = (ans+sm*x.second) % mod;
            M[x.first] = 0;
        }

        return ans;
    }
};
