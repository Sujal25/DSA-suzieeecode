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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        while(head){
            ans.push_back(head->val);
            head=head->next;
        }
        vector<pair<int,int>> pq;
        for(int i=1;i<ans.size()-1;i++){
            if(ans[i]>ans[i+1]&&ans[i]>ans[i-1]||ans[i]<ans[i+1]&&ans[i]<ans[i-1])
            pq.push_back({ans[i],i});
        }
        if(pq.size()<2) return {-1,-1};
        int mini=INT_MAX;
        for(int i=0;i<pq.size()-1;i++){
            mini=min(mini,pq[i+1].second-pq[i].second);
        }
        int maxi=pq.back().second-pq[0].second;
        return {mini,maxi};
    }
};
//critical pt when local maxi or mini having maxi val from prev and next sam e for minin
// easy thing is that make and vector and od it 