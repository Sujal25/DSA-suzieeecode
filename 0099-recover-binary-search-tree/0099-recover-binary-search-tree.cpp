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
TreeNode* first=NULL;
TreeNode* second=NULL;
TreeNode* prev=NULL;
void inorder(TreeNode* r){
    if(r==NULL) return;
    inorder(r->left);
    if(prev&&prev->val>r->val){
        if(first==NULL) first=prev;
        second=r;
    }
    prev=r;

    inorder(r->right);

}
    void recoverTree(TreeNode* root) {
      
        inorder(root);
        swap(first->val,second->val);

    }
};