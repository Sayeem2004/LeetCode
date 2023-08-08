#include <bits/stdc++.h>

class Solution {
public:
    std::vector<std::string> divideString(std::string S, int K, char FILL) {
        std::vector<std::string> ANS;
        int N = S.size(), R = N % K;

        for (int i = 0; i < N; i += K) { ANS.push_back(S.substr(i, K)); }
        if (R != 0) { std::string rem(K-R, FILL); ANS[ANS.size()-1] += rem; }
        return ANS;
    }
};
