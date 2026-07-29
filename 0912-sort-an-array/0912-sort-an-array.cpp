class Solution {
public:
void merge(vector<int>&arr,int lt,int m,int rt){
    int n1=m-lt+1;
    int n2=rt-m;
    vector<int> l(n1),r(n2);
    for(int i=0;i<n1;i++){
        l[i]=arr[lt+i];
    }
    for(int i=0;i<n2;i++){
        r[i]=arr[m+1+i];
    }
    int i=0;
    int j=0;
    int k=lt;
    while(i<n1&&j<n2){
        if(l[i]<=r[j]){
            arr[k]=l[i];
            i++;
        }
        else{
            arr[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=r[j];
        j++;
        k++;
    }

}
void mergesort(vector<int>&arr,int left,int right){
    if(left>=right) return;
    int mid=(right-left)/2+left;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
};
//using merge sort 
