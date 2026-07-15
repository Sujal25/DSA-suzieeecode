class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n==1) return 1;
        int so=0;
        int se=0;
        int o=1;
        int e=2;
        for(int i=0;i<n;i++){
            so+=o;
            se+=e;
            o+=2;
            e+=2;
        }
        int ans=0;
        for(int i=1;i<min(so,se);i++){
            if(so%i==0&&se%i==0) ans=i;
        }
        return ans;
    }
};
//given int n copmute gcd of two num 