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
void inorder(TreeNode* r,vector<int>&in){
    if(r==NULL) return;
    inorder(r->left,in);
    in.push_back(r->val);
    inorder(r->right,in);
}
TreeNode* make(vector<int>&in,int i,int j){
    if(i>j) return NULL;
    int mid=(i+j)/2;
    TreeNode* r=new TreeNode(in[mid]);
    r->left=make(in,i,mid-1);
    r->right=make(in,mid+1,j);
    return r;

}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> in;
        inorder(root,in);
        return make(in,0,in.size()-1);
    }
};