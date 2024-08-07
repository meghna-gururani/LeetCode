class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s=words[i];
            string temp="";
            for(int j=s.length()-1;j>=0;j--){
                temp=temp+s[j];
            }
            if(s==temp){
                return s;
            }
        }
      return "";  
    }
};