#include <bits/stdc++.h>

class Solution {
public:
    int distanceBetweenBusStops(std::vector<int> &DIST, int s, int e) {
        if (s == e) return 0;
        int SM1 = 0, SM2 = 0, N = DIST.size();
        if (s > e) std::swap(s, e);

        for (int i = 0; i < N; i++) {
            if (i < s || i >= e) SM2 += DIST[i];
            else SM1 += DIST[i];
        }

        return std::min(SM1, SM2);
    }
};
