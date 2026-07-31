class Solution {
public:
    int maxArea(vector<int>& height) {
       int area=0;
       int i=0;
       int j=height.size()-1;

       while(i<j){
        int ht=min(height[i],height[j]);
        area=max(area,(j-i)*ht);
        
        if(height[i]<height[j]) i++;
        else j--;
       }


        return area;

    }
};
/* 
one app is try all pair that is tle 
vector<pair<int,int>> ht;
        for(int i=0;i<height.size();i++){
            ht.push_back({height[i],i});
        }
        sort(ht.begin(),ht.end());
int n=ht.size();
        int area=0;
        int h=ht[n-1].first;
        int j=ht[n-1].second;
        for(int i=n-2;i>=0;i--){
            area=max(area,abs(ht[i].first-h)*abs(j-i+1));
        }*/