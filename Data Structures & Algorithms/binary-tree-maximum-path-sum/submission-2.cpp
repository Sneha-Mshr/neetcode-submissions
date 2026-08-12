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
    int maxi = INT_MIN;
    int solve(TreeNode* root){
        if(!root) return 0;
        // to handle the negative value so that no 
        // function call retun the neg val 
        int leftSum = max(0,solve(root->left));
        int rightSum = max(0,solve(root->right));
        maxi = max(maxi, leftSum + root->val + rightSum);
        return root->val + max(leftSum,rightSum);
    }

    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        solve(root);
        return maxi;

    }
};
