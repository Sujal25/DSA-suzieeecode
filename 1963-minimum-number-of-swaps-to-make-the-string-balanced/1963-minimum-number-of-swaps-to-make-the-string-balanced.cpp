class Solution {
public:
    int minSwaps(string s) {
         stack<char> st;
        int cnt=0;
        for(char c:s){
          if(c=='[') st.push(c);
          else {
            if(st.empty()) cnt++;
            if(!st.empty()) st.pop();
          }
        }
        cnt+=st.size();
        return (cnt/2+1)/2;
    }
};