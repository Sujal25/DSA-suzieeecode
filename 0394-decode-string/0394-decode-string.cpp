class Solution {
public:
    string decodeString(string s) {
        stack<string> ch;
        stack<int> nt;
        int num=0;
        string curr="";
       for(char c:s){
        if(isdigit(c)){
            num=10*num+(c-'0');

        }
        else if(c=='['){
            nt.push(num);
            ch.push(curr);
            num=0;
            curr="";
        }
        else if(c==']'){
            int k=nt.top();
            nt.pop();
            string prev=ch.top();
            ch.pop();
            while(k--){
                prev+=curr;
            }
            curr=prev;

        }
        else
        curr+=c;
       }
        return curr;
    }
};