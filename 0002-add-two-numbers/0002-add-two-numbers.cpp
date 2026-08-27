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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //add two number 
        int carry=0;
        ListNode* a=new ListNode(0);
        ListNode* head=a;
        while(l1&&l2){
            int s=(l1->val+l2->val+carry)%10;
            carry=(l1->val+l2->val+carry)/10;
            ListNode* n=new ListNode(s);
            a->next=n;
            a=a->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int s=(l1->val+carry)%10;
            carry=(l1->val+carry)/10;
            ListNode* n=new ListNode(s);
            a->next=n;
            a=a->next;
            l1=l1->next;
        }
        while(l2){
            int s=(l2->val+carry)%10;
            carry=(l2->val+carry)/10;
            ListNode* n=new ListNode(s);
            a->next=n;
            a=a->next;
            l2=l2->next;
        }
        if(carry!=0){
             ListNode* n=new ListNode(carry);
            a->next=n;
        }
        return head->next;
    }
};