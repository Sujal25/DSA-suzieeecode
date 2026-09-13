class Solution {
public:
void shift(vector<vector<int>>& img1,int i,int j){
    //i for col shift and j for row shift 
    int n=img1.size();
    for(int p=n-i-1;p>=0;p--){
        for(int q=n-j-1;q>=0;q--){
            img1[p][q]=img1[p+i][q+j];
        }
    }
}
void lrshift(vector<vector<int>>& img1,int k){
    int n=img1.size();
    if(k>0){
    for(int i=0;i<n;i++){
        for(int j=n-k-1;j>=0;j--){
            img1[i][j+k]=img1[i][j];
        }
        for(int b=0;b<k;b++){
            img1[i][b]=0;
        }
    }
}
else {
    k = -k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-k;j++){
            img1[i][j]=img1[i][j+k];
        }
        for(int b=n-k;b<n;b++){
            img1[i][b]=0;
        }
    }
}
}
void udshift(vector<vector<int>>& img1,int k){
    int n = img1.size();
    if (k > 0) {
        // Down shift by k
        for (int i = n - k - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                img1[i + k][j] = img1[i][j];
            }
        }
        // Fill top k rows with 0
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                img1[i][j] = 0;
            }
        }
    }
    else {
        k = -k;
        // Up shift by k
        for (int i = 0; i < n - k; i++) {
            for (int j = 0; j < n; j++) {
                img1[i][j] = img1[i + k][j];
            }
        }
        // Fill bottom k rows with 0
        for (int i = n - k; i < n; i++) {
            for (int j = 0; j < n; j++) {
                img1[i][j] = 0;
            }
        }
    }
}
int overlap(vector<vector<int>>& img1, vector<vector<int>>& img2){
    int n=img1.size();
    int a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(img1[i][j] == 1 && img2[i][j] == 1) a++;
        }
    }
    return a;
}
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        int ans=-1;
        vector<vector<int>> m;
        m=img1;
       
for(int a=-n+1;a<n;a++){
    for(int b=-n+1;b<n;b++){
         img1 = m;
        lrshift(img1,a);
        udshift(img1,b);
        ans=max(ans,overlap(img1,img2));
    }
}
        //try all possible shift and cal the overlap 
       return ans; 
    }
};
//can be dine by cal the max one in row and col of both the shift acc to thtat the at last cal the overlap 

/*int r=-1;
        int c=-1;
        int r2=-1;
        int c2=-1;
        int o=0;
        int p=0;
        for(int i=0;i<n;i++){
            int one=0;
            int row=0;
            for(int j=0;j<n;j++){
                if(img1[i][j]==1) one++;
                if(img1[j][i]==1) row++;
            }
            if(o<one){
                o=one;
                c=i;
            }
            if(p<row){
                p=row;
                r=j;
            }
        }
        p=0;
        o=0;
        for(int i=0;i<n;i++){
            int one=0;
            int row=0;
            for(int j=0;j<n;j++){
                if(img2[i][j]==1) one++;
                if(img2[j][i]==1) row++;
            }
            if(o<one){
                o=one;
                c2=i;
            }
            if(p<row){
                p=row;
                r2=j;
            }
        }
        if(r<r2) //right shift
        else //left shift
        if(c<c2) //downshift
        else //upshift*/