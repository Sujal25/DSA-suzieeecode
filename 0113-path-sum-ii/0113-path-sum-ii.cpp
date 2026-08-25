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
vector<vector<int>> ans;
int tar;
void psum(TreeNode* r,vector<int>&a,int sum){
    if(!r) return;
    if(r->left==NULL&&r->right==NULL){
        if(sum+r->val==tar){
        a.push_back(r->val);
         ans.push_back(a);
         a.pop_back();}
         return;
       
    }
    a.push_back(r->val);
    psum(r->left,a,sum+r->val);
    psum(r->right,a,sum+r->val);
    a.pop_back();
    
    
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        tar=targetSum;
        vector<int> a;
        psum(root,a,0);
        return ans;
    }
};