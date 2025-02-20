class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string res="";
       int n=word1.size();
       int m=word2.size();
       int i=0;
       while(i<n && i<m){
        res+=word1[i];
        res+=word2[i]; 
        i++;
        cout<<res;
      } 
      while(i<n){
        res+=word1[i];
        i++;
      }  
      while(i<m){
        res+=word2[i];
        i++;
      } 
      return res;    
    }
};