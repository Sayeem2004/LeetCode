#include <bits/stdc++.h>

class Solution {
public:
    int maxScore(std::vector<int> &cardPoints, int k) {
        int n = cardPoints.size();
        std::vector<int> P(n+1), S(n+1);

        for (int i = 0; i < n; i++) P[i+1] = P[i] + cardPoints[i];
        for (int i = n-1; i >= 0; i--) S[n-i] = S[n-i-1] + cardPoints[i];

        int ans = 0;
        for (int i = 0; i <= k; i++) ans = std::max(ans, P[i]+S[k-i]);
        return ans;
    }
};
