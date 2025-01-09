class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size(),count=0,j;
        for(int i=0;i<n;i++){
            string word=words[i];
            for(j=0;j<pref.size();j++){
                if(pref[j]!=word[j])
                    break;
            }
        if(pref.size()==j)
            count++;
        }
        return count;
    }
};