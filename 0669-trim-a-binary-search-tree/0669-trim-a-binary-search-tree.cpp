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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root) return NULL;
        if(root->val<low) return trimBST(root->right,low,high);
        if(root->val>high) return trimBST(root->left,low,high);
        root->left=trimBST(root->left,low,high);
        root->right=trimBST(root->right,low,high);
        return root;
    }
};
/*
int h,l;
vector<int> nodes;
void rem(TreeNode* r){
    if(!r) return;
    if(r->val>=l&&r->val<=h) nodes.push_back(r->val);
    rem(r->left);
    rem(r->right);

}
TreeNode* build(int i,int j){
    if(i>j) return NULL;
    int mid=(j-i)/2+i;
    TreeNode* r=new TreeNode(nodes[mid]);
    r->left=build(i,mid-1);
    r->right=build(mid+1,j);
    return r;
}
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        h=high;
        l=low;
        //this is inorder of bst 
        rem(root);
        sort(nodes.begin(),nodes.end());
        int n=nodes.size()-1;
        return build(0,n);

    }
};*/