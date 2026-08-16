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
int d(TreeNode* r,int& p){
    if(!r) return 0;
    int l=d(r->left,p);
    int ri=d(r->right,p);
    p=max(p,l+ri);
    return 1+max(l,ri);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        int k=d(root,dia);
        return dia;
    }
};