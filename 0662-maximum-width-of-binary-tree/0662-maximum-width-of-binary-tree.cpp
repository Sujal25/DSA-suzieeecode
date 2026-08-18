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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int wid=0;
        queue<pair<TreeNode*,long long>> qt;
        qt.push({root,0});
        while(!qt.empty()){
            int sz=qt.size();
            long long mini=qt.front().second;
            long long f=-1,l;
            while(sz--){
                auto out=qt.front();
                qt.pop();
                auto r=out.first;
               long long i=out.second-mini;
                if(f==-1) f=i;
                l=i;
                if(r->left) qt.push({r->left,2*i+1});
                if(r->right) qt.push({r->right,2*i+2});

            }
            wid=max(wid,(int)(l-f+1));

        }
        return wid;
    }
};