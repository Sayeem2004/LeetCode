#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> diStringMatch(std::string s) {
        int n = s.size();
        std::vector<int> V(n+1, 0);

        int l = 0, r = n;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'D') V[i] = r--;
            else V[i] = l++;
        }

        V[n] = l;
        return V;
    }
};
