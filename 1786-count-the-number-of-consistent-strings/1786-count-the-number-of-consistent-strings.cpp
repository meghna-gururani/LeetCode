class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int>store(26,0);
        int count=0,i,j;
        for(int k=0;k<allowed.size();k++){
            int ch=allowed[k]-'a';
            store[ch]=1;
        }
        for(i=0;i<words.size();i++){
            string s=words[i];
            for(j=0;j<s.size();j++){
                if(store[s[j]-'a']!=1)
                    break;
            }
            if(j==s.size())
                count++;
        }
        return count;
    }
};