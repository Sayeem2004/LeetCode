#include <bits/stdc++.h>

class Solution {
public:
    bool judgePoint24(std::vector<int>& cards) {
        std::vector<double> copy;
        for (int i = 0; i < cards.size(); i++)
            copy.push_back(cards[i]);
        return check24(copy);
    }

    bool check24(std::vector<double>& cards) {
        if (cards.size() == 1) return abs(cards[0] - 24) <= 0.000001;

        bool possible = false;
        for (int i = 0; i < cards.size(); i++) {
            for (int q = i+1; q < cards.size(); q++) {
                // Creating vector
                std::vector<double> next;
                for (int r = 0; r < cards.size(); r++) {
                    if (r != i && r != q) next.push_back(cards[r]);
                }

                // Addition case
                next.push_back(cards[i] + cards[q]);
                possible |= check24(next);
                next.pop_back();

                // Multiplication case
                next.push_back(cards[i] * cards[q]);
                possible |= check24(next);
                next.pop_back();

                // First subtraction case
                next.push_back(cards[i] - cards[q]);
                possible |= check24(next);
                next.pop_back();

                // Second subtraction case
                next.push_back(cards[q] - cards[i]);
                possible |= check24(next);
                next.pop_back();

                // First division case
                if (cards[q] != 0) {
                    next.push_back(cards[i] / cards[q]);
                    possible |= check24(next);
                    next.pop_back();
                }

                // Second division case
                if (cards[i] != 0) {
                    next.push_back(cards[q] / cards[i]);
                    possible |= check24(next);
                    next.pop_back();
                }
            }
        }

        return possible;
    }
};
