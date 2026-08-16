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
void sw(TreeNode* r1, TreeNode* r2){
    if(!r1&&!r2) return;
    if(!r1||!r2){
        ans=false;
        return;
    }
if (r1->val != r2->val) {
            ans = false;
            return;
        }
     if ((r1->left == NULL && r2->left == NULL) ||
            (r1->left && r2->left &&
             r1->left->val == r2->left->val)) {

            sw(r1->left, r2->left);
            sw(r1->right, r2->right);
        }
        else {
            // Flip
            sw(r1->left, r2->right);
            sw(r1->right, r2->left);
        }

}
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1&&!root2) return true;
        if(!root1||!root2) return false;
        if(root1->val!=root2->val) return false;
        sw(root1,root2);
        return ans;
    }
};