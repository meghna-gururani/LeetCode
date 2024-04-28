class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();

        for(int i=0;i<n-m+1;i++){
              string ne="";
            for(int j=0;j<m;j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
                else
                 ne=ne+haystack[i+j];
            }
            if(ne==needle){
                return i;
            }
        }
        return -1;
    }
};