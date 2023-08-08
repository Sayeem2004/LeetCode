#include<bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        ListNode *head = new ListNode( (l1->val + l2->val) % 10);
        int carry = (l1->val + l2->val) > 9;

        ListNode *cpy = head;
        l1 = l1->next, l2 = l2->next;

        while (l1 != NULL || l2 != NULL || carry) {
            int sl1 = (l1 == NULL ? 0 : l1->val);
            int sl2 = (l2 == NULL ? 0 : l2->val);

            cpy->next = new ListNode((sl1 + sl2 + carry) % 10);
            carry = (sl1 + sl2 + carry) > 9;

            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
            cpy = cpy->next;
        }

        return head;
    }
};
