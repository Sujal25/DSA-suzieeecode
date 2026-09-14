class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        //chk for both bothem pt nd top opt 
        //iska botto uska top uska top iska bothhem 
        if(rec1[0]<rec2[2]&&rec1[1]<rec2[3]&&rec1[2]>rec2[0]&&rec1[3]>rec2[1]) return true;
        
        return false;
        
    }
};
