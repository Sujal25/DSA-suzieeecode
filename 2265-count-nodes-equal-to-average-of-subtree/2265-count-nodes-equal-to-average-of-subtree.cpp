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
int cnt(TreeNode* r) {
        if (!r) return 0;
        return 1 + cnt(r->left) + cnt(r->right);
    }
int avg(TreeNode* r){
    if(!r) return 0;
    int l=avg(r->left);
    int rt=avg(r->right);
   
    if(r->val==(l+rt+r->val)/cnt(r)) ans++;
    return l+rt+r->val;
}
    int averageOfSubtree(TreeNode* root) {
        avg(root);
        return ans;
    }
};