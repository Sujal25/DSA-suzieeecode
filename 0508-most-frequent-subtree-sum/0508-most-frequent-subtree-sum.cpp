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
public:unordered_map<int,int> mp;
int sum(TreeNode* r){
    if(!r) return 0;
    int l=sum(r->left);
    int rt=sum(r->right);
    mp[r->val+l+rt]++;
    return l+rt+r->val;
}


    vector<int> findFrequentTreeSum(TreeNode* root) {
       sum(root);
       int fre=-1;
       vector<int> ans;
       for(auto &m:mp){
        fre=max(fre,m.second);

       }
       for(auto &m:mp){
        if(m.second==fre) ans.push_back(m.first);
       } 
       return ans;
    }
};