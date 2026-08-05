class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=capital.size();
        vector<pair<int,int>> ipo;
        for(int i=0;i<n;i++){
            ipo.push_back({capital[i],profits[i]});
        }
        sort(ipo.begin(),ipo.end());
        priority_queue<int> pq;
        int i=0;
        while(k--){
            while(i<n&&ipo[i].first<=w){
                pq.push(ipo[i].second);
                i++;
            }
            if(pq.empty()) break;
            w+=pq.top();
            pq.pop();
        }
    
        return w;
    }
};
//work on some projects k dist project w cap 
//u can start acc to needed cap 
/*   priority_queue<pair<int,int>> pq2;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<capital.size();i++){
            pq.push({profits[i],capital[i]});
        }
        while (k--) {

    while (!pq.empty() && pq.top().second > w) {
        pq2.push(pq.top());
        pq.pop();
    }

    // No affordable project exists
    if (pq.empty()) {
        
        break;
    }

    // Take the most profitable affordable project
    w += pq.top().first;
    pq.pop();

    // Restore skipped projects
    while (!pq2.empty()) {
        pq.push(pq2.top());
        pq2.pop();
    }
}*/