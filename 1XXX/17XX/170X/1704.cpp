#include <bits/stdc++.h>

class Solution {
public:
    bool halvesAreAlike(std::string S) {
        std::string vow = "aeiouAEIOU";
        int cnt1 = 0, cnt2 = 0, N = S.size();

        for (int i = 0; i < N/2; i++) if (vow.find(S[i]) != -1) cnt1++;
        for (int i = N/2; i < N; i++) if (vow.find(S[i]) != -1) cnt2++;

        return cnt1 == cnt2;
    }
};
