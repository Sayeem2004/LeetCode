#include <bits/stdc++.h>

class Solution {
public:
    int numWaterBottles(int NB, int NE) {
        int CNT = NB;
        while (NB >= NE) { CNT += NB / NE; NB = NB / NE + NB % NE; }
        return CNT;
    }
};
