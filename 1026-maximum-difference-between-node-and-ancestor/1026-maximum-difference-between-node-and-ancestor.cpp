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
int ans=INT_MIN;
    void maximini(TreeNode* r,int maxi,int mini){
        if(!r) return;
        if(maxi!=INT_MIN&&mini!=INT_MAX) ans=max({ans,abs(r->val-maxi),abs(r->val-mini)});
        mini=min(mini,r->val);
        maxi=max(maxi,r->val);
        maximini(r->left,maxi,mini);
        maximini(r->right,maxi,mini);
    }
    int maxAncestorDiff(TreeNode* root) {
        maximini(root,INT_MIN,INT_MAX);
        return ans;
    }
};
