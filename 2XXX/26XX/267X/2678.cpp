#include <bits/stdc++.h>

class Solution {
public:
    int countSeniors(std::vector<std::string> &details) {
        int cnt = 0;
        for (int i = 0; i < details.size(); i++)
            if (details[i].substr(11, 2) > "60") cnt++;
        return cnt;
    }
};
