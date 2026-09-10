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
int sub(TreeNode* r,int& b){
    if(!r) {

        return 0;}
        int lb=0;
        int rb=0;
       
    int rt=sub(r->left,lb);
    int lt=sub(r->right,rb);
    b=lb+rb+1;
    if(r->val==(rt+lt+r->val)/(b)) ans++;
    return rt+lt+r->val;


}
//sub of subroot 
    int averageOfSubtree(TreeNode* root) {
        int b=0;
        sub(root,b);
        return ans;
    }
};