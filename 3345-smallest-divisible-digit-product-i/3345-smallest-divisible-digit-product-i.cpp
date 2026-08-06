class Solution {
public:
int pro(int k){
    string s=to_string(k);
    int l=1;
    for(char c:s){
        l*=(c-'0');
    }
    return l;
}
    int smallestNumber(int n, int t) {
        for(int i=n;i<=10*n;i++){
            int p=pro(i);
            
            if(p%t==0) return i;
        }
    return -1;
    }

};