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
bool ans=true;
void chk(TreeNode* a,TreeNode* b){
    if(!a&&!b) return;
    if(!a||!b){
        ans=false;
        return;
    }
    if(a->val!=b->val){
        ans=false;
        return ;
    }
    chk(a->left,b->right);
    chk(a->right,b->left);

}
    bool isSymmetric(TreeNode* root) {
        chk(root->left,root->right);
        return ans;

    }
};