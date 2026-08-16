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
public:int ans=0;

void g(TreeNode* r,int maxi){
    if(!r) return ;
    maxi=max(r->val,maxi);
    if(r->val==maxi) ans++;
    
    g(r->left,maxi);
    g(r->right,maxi);


}
    int goodNodes(TreeNode* root) {
        g(root,root->val);
        return ans;
    }
};