#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        std::vector<char> NUM;
        while (head != NULL) { NUM.push_back('0'+head->val); head = head->next; }

        std::string S(NUM.begin(), NUM.end());
        return std::stoi(S, NULL, 2);
    }
};
