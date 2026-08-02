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
int ht(TreeNode* r){
    if(!r) return 0;
    int l=ht(r->left);
    int rt=ht(r->right);
    return 1+max(l,rt);
}
void lev(TreeNode* r,int lv,double& sum,double& n){
    if(!r) return ;
    if(lv==1){
        sum+=r->val;
        n++;
        return;
    }
    lev(r->left,lv-1,sum,n);
    lev(r->right,lv-1,sum,n);
}
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> db;
int hgt=ht(root);
for(int i=1;i<=hgt;i++){
    double sum=0;
    double n=0;
    lev(root,i,sum,n);
    db.push_back(sum/n);

}
return db;
    }
};