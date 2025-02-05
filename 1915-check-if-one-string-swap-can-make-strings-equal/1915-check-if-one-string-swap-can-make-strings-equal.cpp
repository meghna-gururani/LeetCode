class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int count=0;
        vector<char>res;
        for(int i=0;i<s1.length();i++){
           if(s1[i]!=s2[i]){
            count++;
            res.push_back(s1[i]);
            res.push_back(s2[i]);
           }
        }
        if(count==2){
            if(res[0]==res[3] && res[1]==res[2]){
                return true;
            }
        }
        return false;
    }

};