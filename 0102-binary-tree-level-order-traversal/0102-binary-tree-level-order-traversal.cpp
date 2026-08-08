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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
         vector<vector<int>> ans;
        if(!root)
            return ans;
        q.push(root);
       
        while(!q.empty()){
            int sz=q.size();
            vector<int> a;
            while(sz--){
                auto r=q.front();
                q.pop();
                a.push_back(r->val);
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);

            }
            ans.push_back(a);
        }
        return ans;
    }
};