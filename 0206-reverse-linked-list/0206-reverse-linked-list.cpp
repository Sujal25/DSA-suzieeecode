/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* revll(ListNode* h){
    if(!h||!h->next) return h;
    ListNode* k=revll(h->next);
    h->next->next=h;
    h->next=NULL;
    return k;

}
    ListNode* reverseList(ListNode* head) {
       return revll(head); 
    }
};