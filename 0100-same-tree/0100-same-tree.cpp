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
bool ans=false;
void chk(TreeNode* p, TreeNode* q){
    if(!p&&!q) return;
    if(!p||!q){ ans=true;
    return ;
    }
    
    if(p->val!=q->val) {
        ans=true;
        return;
    }
    chk(p->left,q->right);
    chk(p->left,q->right);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
         if(!p&&!q) return true;
        chk(p,q);
        return ans;
    }
};