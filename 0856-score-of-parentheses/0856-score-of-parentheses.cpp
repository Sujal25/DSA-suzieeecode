class Solution {
public:
    int scoreOfParentheses(string s) {
     stack<int> st;
     
     for(char c:s){
        if(c=='(') st.push(-1);
        else{
            if(st.top()==-1){
                st.pop();
                st.push(1);
                
            }
            else{
                int y=0;
               while(!st.empty()&&st.top()!=-1){
                y+=st.top();
                st.pop();
               }
               if(!st.empty()&&st.top()==-1) st.pop();
               st.push(y*2);

            }

        }
     }   
     int ans=0;
     while(!st.empty()){
        ans+=st.top();
        st.pop();
     }
     return ans;
    }
};