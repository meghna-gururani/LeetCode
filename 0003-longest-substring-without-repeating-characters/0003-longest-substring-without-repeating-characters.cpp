class Solution {
public:
   int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int res = 0;
        for(int i = 0; i < n; i++){
            vector<bool> considerd(256);
            for(int j = i;j < n; j++){
                if(considerd[s[j]] == true){
                    break;
                }
                else{
                  res = max(res, j - i + 1);
                  considerd[s[j]]=true;
                }
            }
            considerd[s[i]]=false;
    }
    return res; 
    } 
};