class Solution {
public:
bool chk(vector<int>&p,int m,int k){
    int last=p[0];
    int cnt=1;
    for(int i=1;i<p.size();i++){
        if(p[i]-last>=m){
            cnt++;
            last=p[i];
        }
    }
    return cnt>=k;

}
    int maximumTastiness(vector<int>& price, int k) {
     sort(price.begin(),price.end());
     int i=0;
     int n=price.size();
     int j=price[n-1]-price[0];
     while(i<j){
        int mid=(1+j-i)/2+i;
        if(chk(price,mid,k)) i=mid;
        else j=mid-1;

     
     }
     return i;
    }
};
