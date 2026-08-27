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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next) return head;
        if(k==0) return head;
        int n=1;
        ListNode* h=head;
        while(h->next){
            n++;
            h=h->next;
        }
         k = k % n;
        if(k==0) return head;

        ListNode* a=head;
       
        k=n-k;
        k--;
        while(k--){
            a=a->next;

        }
        ListNode* ans=a->next;
        a->next=NULL;
        h->next=head;
        return ans;
    }
};