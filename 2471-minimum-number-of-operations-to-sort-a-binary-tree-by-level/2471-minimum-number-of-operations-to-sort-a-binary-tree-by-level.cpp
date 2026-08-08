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
int minswap(vector<int>&a){
   vector<pair<int,int>> v;
   int n=a.size();
   for(int i=0;i<n;i++){
    v.push_back({a[i],i});
   }
   sort(v.begin(),v.end());
    vector<int> vis(n, 0);

    int sw = 0;

    for(int i = 0; i < n; i++) {

        if(vis[i] || v[i].second == i)
            continue;

        int cycle = 0;
        int j = i;

        while(!vis[j]) {
            vis[j] = 1;
            j = v[j].second;
            cycle++;
        }

        sw += cycle - 1;
    }
    return sw;
}

int ht(TreeNode* r){
    if(!r) return 0;
    int l=ht(r->left);
    int rt=ht(r->right);
    return 1+max(l,rt);
}
void lev(TreeNode* r,int l,vector<int>&a){
    if(!r) return;
    if(l==0){
        a.push_back(r->val);
       return; 
    }
    lev(r->left,l-1,a);
    lev(r->right,l-1,a);
}
    int minimumOperations(TreeNode* root) {
        int ans=0;
        //int hgt=ht(root);
        //for(int i=0;i<hgt;i++){
          //  vector<int> a;
            //lev(root,i,a);
            //ans+=minswap(a);

        //}
        int mini=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
             vector<int> a;
            while(sz--){
               
                auto r=q.front();
                q.pop();
                a.push_back(r->val);
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);
               

            }
             mini+=minswap(a);
        }
        return mini;
    }
};
//we can do it by a func cal minswap and for each level oput in arra and find hte swapo adn add them 