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
int ans=-1e9;
int maxi(TreeNode* root){
    if(!root) return -1e9;
        int l=max(0,maxi(root->left));
        int r=max(0,maxi(root->right));
        ans=max(ans,l+r+root->val);
        return root->val+max(l,r);
}
    int maxPathSum(TreeNode* root) {
       maxi(root);
        return ans;
    }
};