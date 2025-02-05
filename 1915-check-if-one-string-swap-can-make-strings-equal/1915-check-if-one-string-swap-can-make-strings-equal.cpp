class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        for(int i=0;i<s1.length();i++){
            for(int j=i+1;j<s1.length();j++){
                string s3=s1;
                char temp=s3[i];
                s3[i]=s3[j];
                s3[j]=temp;
                if(s3==s2){
                    return true;
                }
            }
        }
        return false;
    }
};