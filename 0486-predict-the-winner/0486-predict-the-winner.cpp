class Solution {
public:
bool ans=false;
bool game(vector<int>&n,int sc1,int sc2,int i,int j,int t){
    if(i>j){
        return (sc1>=sc2);
    }
    if(t==0){
        return game(n,sc1+n[i],sc2,i+1,j,1)||
       
        game(n,sc1+n[j],sc2,i,j-1,1);
    }
    else{
       return game(n,sc1,sc2+n[i],i+1,j,0)&&
        game(n,sc1,sc2+n[j],i,j-1,0);    
    }
}
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
   return  game(nums,0,0,0,n-1,0);
    }
};
//two ply 1,2. sc=0,0 if ply 2win then false;
//we have to use dp and having two otion take from last or take from end 
/* int i=0;
     int j=nums.size()-1;
     int sc1=0,sc2=0;
     int t=0;
     while(i<j){
        if(nums[i]<nums[j]){
            if(t==0) {sc1+=nums[j];
            t=1;
            }
            else {sc2+=nums[j];
            t=0;
            }
            j--;
        }
        else {
            if(t==0) {sc1+=nums[i];
            t=1;
            }
            else {sc2+=nums[i];
            t=0;
            }
            i++;
        }

     }   
     if(sc2>sc1) return false;
     return true;*/