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
int ans=INT_MIN;
//maxi from it left and right 
int h(TreeNode* r){
    if(!r) return 0;
    int lt=h(r->left);
    int rt=h(r->right);
    ans=max(ans,lt+rt);
    return 1+max(lt,rt);
}
    int diameterOfBinaryTree(TreeNode* root) {
        h(root);
        
        return ans;
    }
};