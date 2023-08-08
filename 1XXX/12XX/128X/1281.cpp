#include <bits/stdc++.h>

class Solution {
public:
    int subtractProductAndSum(int N) {
        int SM = 0, PROD = 1;
        while (N > 0) { SM += N % 10; PROD *= N % 10; N /= 10; }
        return PROD - SM;
    }
};
