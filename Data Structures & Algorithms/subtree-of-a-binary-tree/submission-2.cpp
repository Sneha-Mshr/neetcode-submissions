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
    bool isSame(TreeNode* a , TreeNode* b){
        if(!a or !b) return a==b;

        if(a->val == b->val) {
            if(isSame(a->left,b->left) && isSame(a->right,b->right)) return true;
        }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;

        if(isSame(root, subRoot)) return true;

        return isSubtree(root->left, subRoot) or isSubtree(root->right,subRoot);
        
    }
};
