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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (root == NULL) return NULL;

        TreeNode *lft = removeLeafNodes(root->left, target), *rgt = removeLeafNodes(root->right, target);
        root->left = lft;
        root->right = rgt;

        if (root->left == NULL && root->right == NULL) {
            if (root->val == target) return NULL;
            else return root;
        } else return root;
    }
};
