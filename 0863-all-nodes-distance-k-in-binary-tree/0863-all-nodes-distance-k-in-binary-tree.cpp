/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
vector<vector<int>> adj = vector<vector<int>>(1001);
void make(TreeNode* r){
    if(!r) return;
    if(r->left){ adj[r->val].push_back(r->left->val);
     adj[r->left->val].push_back(r->val);
    }
    if(r->right) {adj[r->val].push_back(r->right->val);
    adj[r->right->val].push_back(r->val);
    }
    make(r->left);
make(r->right);
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        make(root);
        queue<pair<int,int>> q;
        vector<int> ans;
        vector<int> vis(1001,0);
        q.push({target->val,0});
        vis[target->val]=1;
        while(!q.empty()){
            auto kp=q.front();
            q.pop();
            int node=kp.first;
            int dist=kp.second;
            if(dist==k) ans.push_back(node);
            for(auto ng:adj[node]){
                if(!vis[ng]){
                q.push({ng,dist+1});
                vis[ng]=1;}
            }

        }
        return ans;
    }
};