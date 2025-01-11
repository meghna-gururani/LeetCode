class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.size()){
            return false;
        }
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        int count_odd=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                count_odd++;
            }
        }
        if(count_odd>k){
            return false;
        }
        else{
            return true;
        }
    }
};