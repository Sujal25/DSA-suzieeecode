class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string,int> mp;
        
        int n=wordList.size();
        for(string &s:wordList) mp[s]++;
        if(mp[endWord]==0) return 0;
        //now put into queue to get the min transand reach at that str 
        queue<pair<int,string>> q;
        q.push({1,beginWord});
        
mp[beginWord] = 0;
        while(!q.empty()){
            auto out=q.front();
            q.pop();

            int l=out.first;
            string r=out.second;
            if(r==endWord) return l;
            for(int i=0;i<r.size();i++){
                char o=r[i];
                for(char ch='a';ch<='z';ch++){
                    if (ch == o) continue;
                    r[i]=ch;
                    if(mp[r]>0){
                         q.push({l+1,r});
                         mp[r]=0;
                         }
                }
                r[i]=o;
            }
        }

return 0;
    }
};

//map all the word from list into. map 