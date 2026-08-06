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
void make(TreeNode* r,vector<vector<int>>&adj){
    if(!r) return;
    if(r->left) {adj[r->val].push_back(r->left->val);
     adj[r->left->val].push_back(r->val);
    
     }
     if(r->right){
        adj[r->val].push_back(r->right->val);
     adj[r->right->val].push_back(r->val);
    
     }
      make(r->left,adj);
       make(r->right,adj);
}
    int amountOfTime(TreeNode* root, int start) {
        vector<vector<int>> adj(100001);
        make(root,adj);
        vector<int> dist(100001,-1);
        queue<int> qt;
        dist[start]=0;
        qt.push(start);
        while(!qt.empty()){
            int n=qt.front();
            qt.pop();
            for(int ng:adj[n]){
                if(dist[ng]==-1){
                    dist[ng]=dist[n]+1;
                    qt.push(ng);

                }
            }
        }
        return *max_element(dist.begin(),dist.end());

    }
};
//first tree to graph then logest path woth each wt 1 is the asnwer 
