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
ListNode* rev(ListNode* r){
    if(!r||!r->next) return r;
    ListNode* k=rev(r->next);
    r->next->next=r;
    r->next=NULL;
    return k;
}
    ListNode* removeNodes(ListNode* head) {
       
        head=rev(head);
         ListNode* h=head;
        int maxi=head->val;
        while(head){
            ListNode* p=head->next;
           while(p&&p->val<maxi){
            p=p->next;
           }
           head->next=p;
          if (p) {
               maxi=p->val;
            }
           head=head->next;
        }
        head=rev(h);
        return head;
    }
};
/* if(head->val<maxi){
                if(head->next->next) head->next=NULL;
                head->next=head->next->next;
            }
            else maxi=head->val;
            head=head->next;*/