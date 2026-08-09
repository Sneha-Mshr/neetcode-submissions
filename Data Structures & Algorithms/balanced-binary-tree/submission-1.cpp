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
    int diff = 0;
    int ht(TreeNode* root){
        if(!root) return 0;
        int lh = ht(root->left);
        int rh = ht(root->right);
        int x = abs(lh-rh);
        diff = max(diff,x);
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        ht(root);

        return diff <= 1 ? true : false;
        
    }
};
