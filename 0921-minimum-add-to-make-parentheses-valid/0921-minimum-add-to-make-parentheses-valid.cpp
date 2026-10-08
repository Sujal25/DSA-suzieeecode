class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int cnt=0;
        for(char c:s){
          if(c=='(') st.push(c);
          else {
            if(st.empty()) cnt++;
            if(!st.empty()) st.pop();
          }
        }
        cnt+=st.size();
        return cnt;
    }
};
// move make s valid for valisd parent stack condition 