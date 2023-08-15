#include <bits/stdc++.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void helper(TreeNode* root, std::vector<int> &V) {
        if (root == NULL) return;
        helper(root->left, V);
        V.push_back(root->val);
        helper(root->right, V);
    }

    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> V;
        helper(root, V);
        return V;
    }
};
