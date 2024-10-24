class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j)
                  continue;
                if(s[i]==s[j])
                   break;
            }
            if(j==n)
              return i;
        }
        return -1;
    }
};