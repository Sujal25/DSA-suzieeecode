class Solution {
public:

    int trailingZeroes(int n) {
        // basiclly how many factor of 10 are ther 
    
        int five=0;
        int ten=0;
        for(int i=n;i>0;i--){
            int k=i;
           
            while(k%5==0){
                five++;
                k/=5;
            }
            
            
        }
return five;
    }
};