/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int solve(TreeNode* root, int maxValue) {
        if(!root) return 0;

        int cnt = 0;

        if(root->val >= maxValue)
            cnt = 1;

        maxValue = max(maxValue, root->val);

        cnt += solve(root->left, maxValue);
        cnt += solve(root->right, maxValue);

        return cnt;
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 1;
        return solve(root, root->val);
        
    }
};
