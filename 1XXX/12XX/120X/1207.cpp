#include <bits/stdc++.h>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int> &ARR) {
        int N = ARR.size();
        std::unordered_map<int, int> M;
        for (int i = 0; i < N; i++) M[ARR[i]]++;

        std::unordered_set<int> S;
        for (std::pair<int, int> p : M) {
            if (S.find(p.second) != S.end()) return false;
            S.insert(p.second);
        }

        return true;
    }
};
