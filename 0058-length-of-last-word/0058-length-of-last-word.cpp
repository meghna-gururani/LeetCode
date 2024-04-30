class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int i=n-1;
        int count=0;
        while(i>=0 && isspace(s[i])){
            i--;
        }
        while(i>=0 && isalpha(s[i])){
            i--;
            count++;
        }
        return count;
    }
};