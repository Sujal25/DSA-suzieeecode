class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tot=0;
        int fuel=0;
        int st=0;
        for(int i=0;i<n;i++){
            int dif=gas[i]-cost[i];
            fuel+=dif;
            tot+=dif;
            if(fuel<0) {
                st=i+1;
                fuel=0;
            }
        }
        return tot>=0?st:-1;
    }
};
/*class Solution {
public:
bool chk(vector<int>& gas, vector<int>& cost,int i){
    int k=i;
    int n=gas.size();
    int fuel=0;
    while(k < i + n){
        int ind=k%n;
        
        fuel+=gas[ind];
        fuel-=cost[ind];
         if(fuel < 0) return false;
        k++;

    }
    return true;
}
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int ind=min_element(cost.begin(),cost.end())-cost.begin();
       if(chk(gas,cost,ind)) return ind;
       return -1;
    }
};
//n st at circular amt is gas[i] cost [i]
//as look like greedy make it pair and sort them acc to gas and cost */