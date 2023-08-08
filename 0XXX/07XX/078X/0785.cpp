#include <bits/stdc++.h>

class Solution {
public:
    bool dfs(int v, std::vector<std::vector<int>> &A, std::vector<int> &C, int c) {
        if (C[v] == c) return true;
        if (C[v] == 1-c) return false;
        C[v] = c;

        bool res = true;
        for (int u : A[v]) {
            res &= dfs(u, A, C, 1-c);
        }

        return res;
    }

    bool isBipartite(std::vector<std::vector<int>>& A) {
        std::vector<int> C(A.size(), -1);
        bool res = true;

        for (int i = 0; i < A.size(); i++) {
            if (C[i] == -1) res &= dfs(i, A, C, 0);
        }

        return res;
    }
};
