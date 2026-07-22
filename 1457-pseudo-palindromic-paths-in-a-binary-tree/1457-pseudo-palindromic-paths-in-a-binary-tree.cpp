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
int ans=0;
void trl(TreeNode* root,vector<int>&mp){
    if(root==NULL) return;
mp[root->val-1]++;
if(root->left==NULL&&root->right==NULL){
    int k=0;
for(int i=0;i<9;i++){
    if(mp[i]%2!=0) k++;
}
if(k<=1) ans++; 

}
else{
trl(root->left,mp);

trl(root->right,mp);
}
mp[root->val-1]--;
}
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> map(9,0);
        trl(root,map);
return ans;
    }
};
