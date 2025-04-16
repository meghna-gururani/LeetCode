class Solution {
public:
    bool isvowel(char c){
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++){
         if(isvowel(s[i])) count++;
        }
        int total=count;
        for(int i=k;i<s.size();i++){
            if(isvowel(s[i])) count++;
            if(isvowel(s[i-k])) count--;
            total=max(count,total);
        }
        return total;
    }
    
};