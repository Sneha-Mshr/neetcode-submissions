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
    int dia = 0;
    int hight(TreeNode* root){
        if(!root) return 0;
        int lh = hight(root->left);
        int rh = hight(root->right);
        
        dia = max(dia ,lh + rh);

        return 1 + max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        hight(root);
        //  if i proceed like below it will fails for some test cases bcoz it give correct ans only for the diameter which is passing through the root node so i have to do it at every lever 
        // int left_hight = hight(root->left);
        // int right_hight = hight(root->right);
        // dia = max(dia ,left_hight + right_hight);

        return dia; 
    }
};
