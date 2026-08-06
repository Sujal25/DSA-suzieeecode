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
vector<TreeNode*> ans;
void dlt(TreeNode* &r,unordered_map<int,int>& mp){
    if(!r) return;
    dlt(r->left,mp);
    dlt(r->right,mp);
    if(mp[r->val]){
        if(r->left) ans.push_back(r->left);
        if(r->right) ans.push_back(r->right);
        r=NULL;
    }

}

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_map<int,int> mp;
        for(int x:to_delete) mp[x]++;
        dlt(root,mp);
        if(root) ans.push_back(root);
        return ans;
        
    }
};
//go in deth in returning dlt the node and meke it pt to nul also put in ans vector 