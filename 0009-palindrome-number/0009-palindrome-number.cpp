class Solution {
public:
    bool isPalindrome(int x) {
        string k=to_string(x);

        int i=0;
        int j=k.size()-1;
        while(i<j){
            if(k[i]!=k[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};