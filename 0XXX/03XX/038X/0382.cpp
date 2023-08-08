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
    ListNode* list;

    Solution(ListNode* head) {
        list = head;
    }

    int getRandom() {
        ListNode *copy = list;
        int cnt = 1, ans = copy->val;
        while (copy) {
            if (rand() % cnt == 0) ans = copy->val;
            cnt++; copy = copy->next;
        }
        return ans;
    }
};
