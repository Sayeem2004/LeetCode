#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int> &DIG) {
        int N = DIG.size(), carry = 1;
        std::vector<int> RES(N);

        for (int i = 0; i < N; i++) {
            RES[i] = (DIG[N-i-1] + carry) % 10;
            if (DIG[N-i-1] + carry >= 10) carry = 1;
            else carry = 0;
        }

        if (carry) RES.push_back(carry);
        std::reverse(RES.begin(), RES.end());
        return RES;
    }
};
