class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
       if(digits.back()<9) { digits[n-1]+=1;
       return digits;}
       int c=0;
       for(int i=n-1;i>=0;i--){
        if(digits[i]==9) {
            c=1;
            digits[i]=0;
            }
            else {
            digits[i]+=c;
            c=0;
            break;
            }
       }
        if(c!=0) digits.insert(digits.begin(),c);
        return digits;
    }
};