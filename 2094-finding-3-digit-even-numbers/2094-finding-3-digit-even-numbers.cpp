class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
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
      vector<int> k;
      for(int x:st){
        k.push_back(x);
      }
return k;    
    }
};