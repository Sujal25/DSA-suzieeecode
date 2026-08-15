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
vector<int> ans;
void pre(Node* r){
    if(!r) return;
    ans.push_back(r->val);
    for(auto c:r->children){
        pre(c);
    }
}
    vector<int> preorder(Node* root) {
        pre(root);
        return ans;
    }
};
//for(auto child : root->children) {
//    solve(child);
//}