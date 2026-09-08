class Solution {
public:

    int trailingZeroes(int n) {
        // basiclly how many factor of 10 are ther 
        int two=0;
        int five=0;
        int ten=0;
        for(int i=n;i>0;i--){
            int k=i;
            while(k%2==0){
                two++;
                k/=2;
            }

            while(k%5==0){
                five++;
                k/=5;
            }
            while(k%10==0){
                ten++;
                k/=10;
            }
            
        }
return min(five,two)+ten;
    }
};