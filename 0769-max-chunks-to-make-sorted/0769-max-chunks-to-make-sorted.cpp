class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       
        int maxi=0;
        int cnt=0;
       

        for(int i=0;i<arr.size();i++){
            
            maxi=max(maxi,arr[i]);
            if(maxi==i) cnt++;
               

    }
    return cnt;
    }
};
//1,0,4,3,2-->2
//1,3,2,0,4
/* //arr o to n-1;
        int mini=arr[0];
        int maxi=arr[0];
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<mini) mini=arr[i];
else cnt++;
    }
    return cnt;
    
    
    int n=arr.size();
      int target=arr[n-1];
      if(arr[0]>target){
        return 1;
      }
      int cnt=0;
      for(int i=0;i<n;i++){
        if(cnt<target &&arr[i]<target){
            cnt++;
        }
        if(snt==)
      }
    */