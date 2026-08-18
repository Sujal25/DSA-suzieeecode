class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++) {
            if(leftChild[i] != -1) {
                mp[leftChild[i]]++;
                if(mp[leftChild[i]] > 1)
                    return false;
            }

            if(rightChild[i] != -1) {
                mp[rightChild[i]]++;
                if(mp[rightChild[i]] > 1)
                    return false;
            }
        }
        int root = -1;

        for(int i = 0; i < n; i++) {
            if(mp[i] == 0) {
                if(root != -1)
                    return false;
                root = i;
            }
        }

        if(root == -1)
            return false;
mp.clear();
queue<int> qt;
       mp[root]=1;
       qt.push(root);
       while(!qt.empty()){
            int nxt=qt.front();
            qt.pop();
            if(leftChild[nxt]!=-1){
                mp[leftChild[nxt]]++;
                 if(mp[leftChild[nxt]]!=1) return false;
                 qt.push(leftChild[nxt]);
                 }
            if(rightChild[nxt]!=-1){ mp[rightChild[nxt]]++;
                 if(mp[rightChild[nxt]]!=1) return false;
                 qt.push(rightChild[nxt]);}
        
       } 
      return mp.size()==n;
    }
};
/*  for(int i=0;i<n;i++){
        bool ans=false;
unordered_map<int,int> mp;
       queue<int> qt;
       mp[i]=1;
       qt.push(i);
       while(!qt.empty()){
            int nxt=qt.front();
            qt.pop();
            if(leftChild[nxt]!=-1){
                mp[leftChild[nxt]]++;
                 if(mp[leftChild[nxt]]!=1){ ans=true;
                 break;}
                 qt.push(leftChild[nxt]);
                 }
            if(rightChild[nxt]!=-1){ mp[rightChild[nxt]]++;
                 if(mp[rightChild[nxt]]!=1) {ans=true;
                 break;}
                 qt.push(rightChild[nxt]);}
        
       } 
       if(ans==true) continue;
     if(mp.size()==n) return true;
       }
       return false;*/