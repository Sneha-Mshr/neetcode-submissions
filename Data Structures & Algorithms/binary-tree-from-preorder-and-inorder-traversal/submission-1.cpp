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
    TreeNode* built(vector<int>& pre,int preStart, 
    int preEnd,vector<int>& ino,int inoStart, int inoEnd,unordered_map<int,int>&mp){

        if(preStart > preEnd) return NULL;

        TreeNode* root = new TreeNode(pre[preStart]);
        int idx = mp[pre[preStart]];
        int lenOfIno = idx - inoStart;

        root->left = built(pre,preStart+1,preStart+lenOfIno,ino,inoStart,idx-1,mp);

        root->right = built(pre,preStart+lenOfIno+1,preEnd,ino,idx+1,inoEnd,mp);

        return root;

    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& ino) {
        int n=pre.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[ino[i]]=i;

        TreeNode* root = built(pre,0,pre.size()-1,ino,0,ino.size()-1,mp);

        return root; 
    }
};
