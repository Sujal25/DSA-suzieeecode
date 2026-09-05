class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
         
        vector<int> ans;
        string k="123456789";
       for(int len=2;len<=9;len++){
        for(int st=0;st+len<=9;st++){
int n=stoi(k.substr(st,len));
if(n>=low&&n<=high) ans.push_back(n);

        }
        
       }
        return ans;
    }
};
/* return {};
        vector<int> ans;
        for(int i=low;i<=high;i++){
            string p=to_string(i);
            bool fg=true;
            for(int i=1;i<p.size();i++){
                if(p[i]-1!=p[i-1]){ fg=false;
                break;}
            }
            if(fg==true) ans.push_back(i);
        }
        return ans;*/