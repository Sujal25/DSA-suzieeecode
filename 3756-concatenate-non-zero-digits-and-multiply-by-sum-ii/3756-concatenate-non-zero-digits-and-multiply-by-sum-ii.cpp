class Solution {
public:
int mod=1e9+7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n=s.size();
        vector<int> presum(n+1,0);
        vector<int> cnt(n+1,0);
        vector<long long> prenum(n+1,0);
        vector<long long> p10(n+1,0);
         p10[0] = 1;
        for(int i=1;i<=n;i++){
            p10[i]=(p10[i - 1] * 10) % mod;
        }
        for(int i=0;i<n;i++){
            int d=s[i]-'0';
            presum[i+1]=presum[i]+d;
            cnt[i+1]=cnt[i];
            prenum[i+1]=prenum[i];
            if (d != 0) {
                cnt[i + 1]++;
                prenum[i + 1] = (prenum[i] * 10 + d) % mod;
            }

        }
        vector<int> ans;
        for(auto &q:queries){
            int l=q[0];
            int r=q[1];
            long long digitsum=presum[r+1]-presum[l];
            int nz=cnt[r+1]-cnt[l];
            long long x =(prenum[r + 1] - prenum[l] * p10[nz] % mod + mod) % mod;
            ans.push_back((x * digitsum) % mod);
        }
        return ans;
    }
};

/*class Solution {
public:
int mod=1e9+7;
int sum(const string &p,int l,int r,vector<int>&pre) {
       long long a=0;
        long long sum=pre[r]-pre[l ];
        for(int i=l;i<=r;i++){
            if(p[i]=='0') continue;
            else{
                a=(a*10+(p[i]-'0'))%mod;
            
            }
        }
       
        return (a*sum)%mod;
    }
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> an;
        int k=s.size();
        vector<int> pre(k+1,0);
        int su=0;
        for(int i=1;i<=k;i++){
            su+=(s[i-1]-'0');
            pre[i]=su;

        }
        for(int i=0;i<queries.size();i++){
            an.push_back(sum(s,queries[i][0],queries[i][1],pre));

        }
        return an;
    }
};*/