class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string str=s1+" "+s2;
        vector<string>final,res;
        int i,j;
        string word;
        stringstream ss(str);
        while(ss>>word){
              final.push_back(word);    
        }
        for(int i=0;i<final.size();i++){
            int count=0;
            for(int j=0;j<final.size();j++){
                if(final[i]==final[j]){
                    count++;
                }
            }
            if(count<=1){
                res.push_back(final[i]);
            }
        }
        return res;    
    }
};