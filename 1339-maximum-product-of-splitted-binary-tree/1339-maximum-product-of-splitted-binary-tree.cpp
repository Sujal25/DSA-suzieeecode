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
int m=1e9+7;
int s=0;
void sum(TreeNode* r){
    if(!r) return;
    s+=r->val;
    sum(r->left);
    sum(r->right);
}
long long ans=0;
int sub(TreeNode* r){
if(!r) return 0;
int lt=sub(r->left);
int rt=sub(r->right);
ans=max(ans,(long long )(lt+rt+r->val)*(s-(lt+rt+r->val)));
return lt+rt+r->val;

}
    int maxProduct(TreeNode* root) {
       
        sum(root);
        sub(root);
        return ans%m;

    }
};
//