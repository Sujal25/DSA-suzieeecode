/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        if(!root) return {};
        while(!q.empty()){
            int sz=q.size();
            vector<int> a;
            while(sz--){
                auto o=q.front();
                q.pop();
                
                a.push_back(o->val);
                for(auto c:o->children){
                    q.push(c);
                    
                }

            }
            ans.push_back(a);
        }
return ans;
    }
};