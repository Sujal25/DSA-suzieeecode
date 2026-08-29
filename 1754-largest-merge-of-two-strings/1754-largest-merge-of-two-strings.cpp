class Solution {
public:
string ans="";
void merge(string&w1,string&w2,int i,int j,string m){
    if(i==w1.size()&&j==w2.size()){
        if (ans.empty() || ans < m)
                ans = m;
        return;
    }
    if (i == w1.size()||j==w2.size()) {
            while (j < w2.size()) {
                m += w2[j];
                j++;
            }
             while (i < w1.size()) {
                m += w1[i];
                i++;
            }
            if (ans.empty() || ans < m)
                ans = m;

            return;
        }
    if(w1[i]<w2[j])
    merge(w1,w2,i,j+1,m+w2[j]);
    else if(w1[i]>w2[j])
    merge(w1,w2,i+1,j,m+w1[i]);
    else{
      
        merge(w1,w2,i+1,j,m+w1[i]);
        merge(w1,w2,i,j+1,m+w2[j]);

    }
    
}
    string largestMerge(string word1, string word2) {
       // merge(word1,word2,0,0,"");
  
        
        string a = "";
    int i = 0, j = 0;

    while (i < word1.size() && j < word2.size()) {
        if (word1.substr(i) > word2.substr(j)) {
            a += word1[i++];
        } else {
            a += word2[j++];
        }
    }

    while (i < word1.size()) {
        a += word1[i++];
    }

    while (j < word2.size()) {
        a += word2[j++];
    }

    return a;
       
    }
};