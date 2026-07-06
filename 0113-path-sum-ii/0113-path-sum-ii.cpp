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
public:vector<vector<int>> ans;
int tr;
void add(TreeNode* root, int tsum,vector<int>&a){
    if(root==NULL) return;

    if(root->left==NULL&&root->right==NULL){
        if(tsum+root->val==tr){
            a.push_back(root->val);
            ans.push_back(a);
            a.pop_back();

        }           
         return;
        
    }

        a.push_back(root->val);
        add(root->left,tsum+root->val,a);

        add(root->right,tsum+root->val,a);
        a.pop_back();
        
    

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        tr=targetSum;
        vector<int> a;
add(root,0,a);
return ans;
    }
};