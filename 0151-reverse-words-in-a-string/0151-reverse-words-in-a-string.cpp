class Solution {
public:
    string reverseWords(string s) {
        s=s+" ";
       string word="",rev="";
       for(int i=0;i<s.size();i++){
         if(s[i]!=' ')
           word+=s[i];
        else{
            rev=word+rev;
            if(word!="") rev=" "+rev;      
            word="";
        }
       } 
    return rev.substr(1,rev.size());  
    }
};