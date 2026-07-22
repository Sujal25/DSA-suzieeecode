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
void chk(TreeNode* root,vector<int>&in){
    if(root==NULL) return;
    chk(root->left,in);
    in.push_back(root->val);
    chk(root->right,in);
}
    bool isValidBST(TreeNode* root) {
        vector<int> in;
        chk(root,in);
        for(int i=1;i<in.size();i++){
            if(in[i]<=in[i-1]) return false;
        }
    return true;
    }
};