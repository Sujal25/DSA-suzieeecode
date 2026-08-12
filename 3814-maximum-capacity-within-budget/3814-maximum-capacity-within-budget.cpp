class Solution {
public:
bool chhk(vector<pair<int,int>>& v,int cap,int bud){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i].first+v[j].first==cap){
            if(v[i].second+v[j].second<bud) return true;
            else {
                i++;
                j--;
            }
        }
        else if(v[i].first+v[j].first>cap) j--;
        else i++;
    }
    return false;

}
bool chk(vector<pair<int,int>>& v, int cap, int bud) {
        int n = v.size();
        // suffix[i] = minimum cost from i to n-1
        vector<int> suffix(n);
        suffix[n - 1] = v[n - 1].second;

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = min(v[i].second, suffix[i + 1]);
        }

        for (int i = 0; i < n; i++) {

            int need = cap - v[i].first;

            // Find first index j where capacity[j] >= need
            int l = i + 1, r = n - 1;
            int pos = n;

            while (l <= r) {
                int mid = l + (r - l) / 2;

                if (v[mid].first >= need) {
                    pos = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            if (pos < n) {
                // Minimum possible cost of any valid second machine
                if (v[i].second + suffix[pos] < bud)
                    return true;
            }
        }

        return false;
    }
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        
        vector<pair<int,int>> v;
          int ans=0;
      
        int n=costs.size();  
        if(n==1&&costs[0]>=budget) return 0;
        if(n==1&&costs[0]<budget) return capacity[0]; 
        for(int i=0;i<costs.size();i++){
            if(costs[i]<budget) ans=max(ans,capacity[i]);
            v.push_back({capacity[i],costs[i]});
        }
        sort(v.begin(),v.end());
        int i=0;
        int j=v[n-1].first+v[n-2].first;
      
        //bs on capa
        while(i<=j){
            int mid=(j-i)/2+i;
            if(chk(v,mid,budget)){
                i=mid+1;
                ans=max(ans,mid);
            }
            else j=mid-1;
        }
        return ans;
    }
};