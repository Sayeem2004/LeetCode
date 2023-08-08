#include <bits/stdc++.h>

class Solution {
public:
    int longestWPI(std::vector<int> &hours) {
        int n = hours.size();
        std::vector<int> P(n+1);
        std::map<int,int> M;

        for (int i = 1; i < n+1; i++) P[i] = P[i-1] + (hours[i-1] > 8 ? 1 : -1);

        int ans = 0;
        for (int i = 1; i < n+1; i++) {
            if (P[i] > 0) ans = std::max(ans, i);
            else {
                if (M.find(P[i]-1) != M.end()) ans = std::max(ans, i-M[P[i]-1]);
                if (M.find(P[i]) == M.end()) M[P[i]] = i;
            }
        }

        return ans;
    }
};
