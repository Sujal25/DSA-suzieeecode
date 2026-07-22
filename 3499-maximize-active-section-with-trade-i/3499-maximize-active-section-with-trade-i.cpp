class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int one=0;
        
        for(char c:s)
        if(c=='1') one++;
        vector<int> adjblk;
        int i=0;
        while(i<s.size()){
            if(s[i]=='0'){
                int st=i;
                while(i<s.size()&&s[i]=='0') i++;
                adjblk.push_back(i-st);

            }
            else i++;
        }
int maxiblk=0;
for(int j=1;j<adjblk.size();j++){
    maxiblk=max(maxiblk,adjblk[j]+adjblk[j-1]);
}
return one+maxiblk;
    }
};

/*given bs 
1-active
0-inactive 
to maxi no of activ section two option conti 1 to 0 or conti 0 to 1 
chk for continuis 1 with surrounded zero 
1+2+
*/