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
vector<string> ans;
void pth(TreeNode* r,string s){
    if(!r) {
        return;
    }
    
    string k=to_string(r->val);
    s+=k;
    s+="->";
if(!r->left&&!r->right){
         s.pop_back();
        s.pop_back();
        ans.push_back(s);
        return;
    }
    pth(r->left,s);
    pth(r->right,s);
}
    vector<string> binaryTreePaths(TreeNode* root) {
        pth(root,"");
        return ans;
    }
};