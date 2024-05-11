class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>result;
        for(int i=0;i<words.size();i++){
            bool issub=false;
            for(int j=0;j<words.size();j++){
                if(i!=j && words[j].find(words[i])!=-1){
                    issub=true;
                    break;
                }
            }
            if(issub)
                result.push_back(words[i]);
        }
        return result;  
        }
};