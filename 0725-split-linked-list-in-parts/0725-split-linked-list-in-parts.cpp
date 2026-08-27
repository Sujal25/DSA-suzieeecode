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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode* h=head;
        while(h){
            n++;
            h=h->next;
        }
h=head;
ListNode*  s=head;
vector<ListNode*> ans(k,NULL);
int size = n / k;
        int extra = n % k;
     
       int i=0;
       while (i < k) {
            ans[i] = s;

            // Current part gets one extra node
            int p = size + (i < extra ? 1 : 0);

            if (p == 0) {
                break;
            }

            // Move h to the last node of this part
            for (int j = 1; j < p; j++) {
                h = h->next;
            }

            // Save beginning of next part
            ListNode* l = h->next;

            // End current part
            h->next = NULL;

            // Move to next part
            s = l;
            h = l;

            i++;
        }
        return ans;
        
    }
};