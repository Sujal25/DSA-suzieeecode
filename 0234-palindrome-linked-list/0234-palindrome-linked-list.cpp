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
ListNode* rev(ListNode* h){
    if(!h||!h->next) return h;
    ListNode* k=rev(h->next);
    h->next->next=h;
    h->next=NULL;
    return k;
}
    bool isPalindrome(ListNode* head) {
ListNode* slow=head;
ListNode* fast=head;
while(fast&&fast->next){
    fast=fast->next->next;
    slow=slow->next;
}
      ListNode* p2=rev(slow);
      while(head&&p2){
        if(head->val!=p2->val) return false;
        head=head->next;
        p2=p2->next;
      }
      return true;
    }
};