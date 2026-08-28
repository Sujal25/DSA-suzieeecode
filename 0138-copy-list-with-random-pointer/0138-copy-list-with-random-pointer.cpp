/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* n=new Node(0);
        Node* p=n;
        Node* h=head;
        unordered_map<Node*,Node*> mp;
        while(h){
            int x=h->val;
             Node* k=new Node(x);
              mp[h] = k;
             n->next=k;
             n=n->next;
             h=h->next;
        }
        n=p->next;
        h=head;
        while(h){
            if (h->random)
                n->random = mp[h->random];
            else
                n->random = nullptr;
            h=h->next;
            n=n->next;
        }
        
return p->next;
    }
};