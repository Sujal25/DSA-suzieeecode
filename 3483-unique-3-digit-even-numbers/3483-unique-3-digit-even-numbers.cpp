class Solution {
public:
    int totalNumbers(vector<int>& digits) {
      int p=digits.size();
      set<int> st;
      for(int i=0;i<p;i++){
        if(digits[i]==0) continue;
        for(int j=0;j<p;j++){
            if(j==i) continue;
            for(int k=0;k<p;k++){
                if(i==k||j==k) continue;
                if(digits[k]%2==0){
                int num=digits[i]*100+digits[j]*10+digits[k];
                st.insert(num);}
            }
        }
      }
return st.size();
    }
};
/*  int p=digits.size();
        set<int> st;
        for(int x:digits) st.insert(x);
        int n=st.size();
        
        int zero=0;
        int tw=0;
        for(auto x:st){
            if(x==0) zero++;
            if(x%2==0) tw++; 
        }
        if(zero==0) return tw*(n-1)*(p-2);
        if(zero>2) return (tw-1)*(n-1)*(p-zero)*2;//zero in center
        return (tw-1)*(n-1)*(p-zero-1)*2;
        */