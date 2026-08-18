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
vector<vector<int>> adj = vector<vector<int>>(1e5+1);
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
void dfs(vector<int>&vis,vector<int>&dist,int d,int i){
    vis[i]=1;
    dist[i]=d;
    for(auto ng:adj[i]){
        if(!vis[ng]){

            dfs(vis,dist,d+1,ng);
        }
    }

}
    int amountOfTime(TreeNode* root, int start) {
        make(root);
        vector<int> dist(1e5+1,0);
        vector<int> vis(1e5+1,0);

dfs(vis,dist,0,start);
return *max_element(dist.begin(),dist.end());

    }
};