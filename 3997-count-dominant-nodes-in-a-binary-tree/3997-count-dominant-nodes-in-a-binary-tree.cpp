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
int ans=0;
int maxii(TreeNode* r){
    if(!r) return INT_MIN;
    if(!r->left&&!r->right) {
        ans++;
        return r->val;}
    
    int lt=maxii(r->left);
    int rt=maxii(r->right);
    if(r->val>=max(lt,rt)) ans++;
    return max({r->val,lt,rt});

}
    int countDominantNodes(TreeNode* root) {
        maxii(root);
        return ans;
    }
};